#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

class FileException{
    private:
        char* strdup(const char* str) const;
        char* filename_;
        string comment_;
        int err_code_;
    public:
        FileException(const char* filenam, const char* comment);
        FileException(const FileException& other);
        ~FileException(){delete[] filename_;}
        char* GetFilename() const {return filename_;}
        string GetComment() const {return comment_;}
        int GetErrCode() const {return err_code_;}
};

char* FileException::strdup(const char* str) const{
    char* res = new char[strlen(str) + 1];
    strcpy(res, str);
    return res;
}

FileException::FileException(const char* filenam, const char* comment){
    filename_ = strdup(filenam);
    comment_ = comment;
    err_code_ = errno;
}

FileException::FileException(const FileException& other){
    filename_ = strdup(other.filename_);
    comment_ = other.comment_;
    err_code_ = other.err_code_;
}

int count_symbols(const char* filename){
    ifstream fin(filename);
    if(!fin.is_open()){
        throw FileException(filename, "Can't open file");
    }

    int count = 0;
    while(fin.get() && !fin.eof()){
        count++;
    }
    fin.close();
    return count;
}

int main(int argc, char** argv){
    if(argc < 2){
        cerr << "Use: " << argv[0] << " filename " << endl;
        return 1;
    }
    int count_symb;
    try{

        count_symb = count_symbols(argv[1]);

    }catch(FileException& ex){

        cerr << "Exception: " << ex.GetComment() 
        << " " << ex.GetFilename() 
        << " Error code: " << strerror(ex.GetErrCode()) 
        << endl;
        return 2;

    }catch(...){
        cerr << "Unknow error" << endl;
        return 2;
    }
    cout << "File " << argv[1] << " contains " << count_symb << " symbols" << endl;

    ofstream fout_open("result.txt");
    if(!fout_open.is_open()){
        cerr << "Can't open file result.txt" << endl;
        return 3;
    }

    fout_open << "File " << argv[1] << " contains " << count_symb << " symbols" << endl;
    fout_open.close();
    return 0;
}