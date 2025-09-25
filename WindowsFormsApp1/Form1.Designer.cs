
namespace WindowsFormsApp1
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.pl = new System.Windows.Forms.Panel();
            this.pr = new System.Windows.Forms.Panel();
            this.pt = new System.Windows.Forms.PictureBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.numx = new System.Windows.Forms.NumericUpDown();
            this.numy = new System.Windows.Forms.NumericUpDown();
            this.numr = new System.Windows.Forms.NumericUpDown();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.time = new System.Windows.Forms.Timer(this.components);
            this.pc = new System.Windows.Forms.PictureBox();
            this.pl.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pt)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.numx)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.numy)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.numr)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pc)).BeginInit();
            this.SuspendLayout();
            // 
            // pl
            // 
            this.pl.Controls.Add(this.pc);
            this.pl.Controls.Add(this.pt);
            this.pl.Location = new System.Drawing.Point(42, 42);
            this.pl.Name = "pl";
            this.pl.Size = new System.Drawing.Size(368, 271);
            this.pl.TabIndex = 0;
            this.pl.Paint += new System.Windows.Forms.PaintEventHandler(this.panel1_Paint);
            // 
            // pr
            // 
            this.pr.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.pr.Location = new System.Drawing.Point(42, 42);
            this.pr.Name = "pr";
            this.pr.Size = new System.Drawing.Size(445, 271);
            this.pr.TabIndex = 0;
            // 
            // pt
            // 
            this.pt.Image = ((System.Drawing.Image)(resources.GetObject("pt.Image")));
            this.pt.Location = new System.Drawing.Point(199, 74);
            this.pt.Name = "pt";
            this.pt.Size = new System.Drawing.Size(32, 29);
            this.pt.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pt.TabIndex = 1;
            this.pt.TabStop = false;
            this.pt.Click += new System.EventHandler(this.pt_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(566, 64);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(14, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "X";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(566, 139);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(14, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Y";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(566, 215);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(15, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "R";
            this.label3.Click += new System.EventHandler(this.label3_Click);
            // 
            // numx
            // 
            this.numx.Increment = new decimal(new int[] {
            5,
            0,
            0,
            0});
            this.numx.Location = new System.Drawing.Point(640, 64);
            this.numx.Name = "numx";
            this.numx.Size = new System.Drawing.Size(120, 20);
            this.numx.TabIndex = 3;
            this.numx.ValueChanged += new System.EventHandler(this.numx_ValueChanged);
            // 
            // numy
            // 
            this.numy.Increment = new decimal(new int[] {
            5,
            0,
            0,
            0});
            this.numy.Location = new System.Drawing.Point(640, 139);
            this.numy.Name = "numy";
            this.numy.Size = new System.Drawing.Size(120, 20);
            this.numy.TabIndex = 4;
            this.numy.ValueChanged += new System.EventHandler(this.numy_ValueChanged);
            // 
            // numr
            // 
            this.numr.Increment = new decimal(new int[] {
            5,
            0,
            0,
            0});
            this.numr.Location = new System.Drawing.Point(640, 213);
            this.numr.Name = "numr";
            this.numr.Size = new System.Drawing.Size(120, 20);
            this.numr.TabIndex = 5;
            this.numr.ValueChanged += new System.EventHandler(this.numr_ValueChanged);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(569, 364);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 6;
            this.button1.Text = "Run";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(685, 364);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(75, 23);
            this.button2.TabIndex = 7;
            this.button2.Text = "Exit";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(61, 4);
            this.contextMenuStrip1.Opening += new System.ComponentModel.CancelEventHandler(this.contextMenuStrip1_Opening);
            // 
            // time
            // 
            this.time.Tick += new System.EventHandler(this.time_Tick);
            // 
            // pc
            // 
            this.pc.BackColor = System.Drawing.SystemColors.HotTrack;
            this.pc.Image = ((System.Drawing.Image)(resources.GetObject("pc.Image")));
            this.pc.Location = new System.Drawing.Point(114, 131);
            this.pc.Name = "pc";
            this.pc.Size = new System.Drawing.Size(12, 13);
            this.pc.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pc.TabIndex = 9;
            this.pc.TabStop = false;
            this.pc.Click += new System.EventHandler(this.pt1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.pl);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.numr);
            this.Controls.Add(this.numy);
            this.Controls.Add(this.numx);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.pr);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.pl.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.pt)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.numx)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.numy)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.numr)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pc)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Panel pl;
        private System.Windows.Forms.Panel pr;
        private System.Windows.Forms.PictureBox pt;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.NumericUpDown numx;
        private System.Windows.Forms.NumericUpDown numy;
        private System.Windows.Forms.NumericUpDown numr;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.Timer time;
        private System.Windows.Forms.PictureBox pc;
    }
}

