using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        enum CalcOp
        {
            None,
            Add,
            Sub,
            Mul,
            Div,
        }
        CalcOp prevOp = CalcOp.None;
        bool NeedClear = true;
        float prev = 0;
        private void but0_Click(object sender, EventArgs e)
        {
            if (NeedClear)
            {
                tb.Text = "";
                NeedClear = false;
            }
            if (tb.Text.Length < 10)
                tb.Text += ((Button)sender).Text;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            palceBut(but0, 2, 3);
            palceBut(but0, 1, 3);
            for (int x=0; x<3; x++)
                for (int y=0; y<3; y++)
                {
                    Button b = new Button();
                    b.Parent = this;
                    b.Text = (y * 3 + x + 1).ToString();
                    b.Click += but0_Click;
                    palceBut(b, x, y);
                }

        }
        private void palceBut (Button b, int x, int y)
        {
            b.Size = new Size(40, 40);
            b.Left = tb.Left + 45 * x;
            b.Top = tb.Top + +tb.Height + 5 + y * 45;
            b.Font = new Font("Microsoft Sans Serif", 14f);
        }
        private void butP_Click(object sender, EventArgs e)
        {

        }
        private void butE_Click(object sender, EventArgs e)
        {

        }

        private void butp_Click_1(object sender, EventArgs e)
        {
            NeedClear = true;
            prev = float.Parse(tb.Text);
            prevOp = CalcOp.Add;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            float v = float.Parse(tb.Text);
            switch (prevOp)
            {
                case CalcOp.Add:
                    tb.Text = (prev + v).ToString();
                    break;
                case CalcOp.Sub:
                    tb.Text = (prev - v).ToString();
                    break;
                case CalcOp.Div:
                    tb.Text = (prev / v).ToString();
                    break;
                case CalcOp.Mul:
                    tb.Text = (prev * v).ToString();
                    break;
            }
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            if (tb.Text[0] == '-')
            {
                tb.Text = tb.Text.Substring(1);

            }
            else {

                tb.Text = "-" + tb.Text;
            }
        }

        private void butDot_Click(object sender, EventArgs e)
        {
            if (NeedClear)
            {
                tb.Text = "0";
                NeedClear = false;
            }
            if(tb.Text.Length < 9) {
                tb.Text += ",";
            }
        }

        private void button1_Click_2(object sender, EventArgs e)
        {
            NeedClear = true;
            prev = float.Parse(tb.Text);
            prevOp = CalcOp.Mul;
        }

        private void butS_Click(object sender, EventArgs e)
        {
            NeedClear = true;
            prev = float.Parse(tb.Text);
            prevOp = CalcOp.Sub;
        }

        private void butm_Click(object sender, EventArgs e)
        {
            NeedClear = true;
            prev = float.Parse(tb.Text);
            prevOp = CalcOp.Div;
        }

        private void button1_Click_3(object sender, EventArgs e)
        {
            tb.Text = " ";
            NeedClear = false;
        }
    }
}
