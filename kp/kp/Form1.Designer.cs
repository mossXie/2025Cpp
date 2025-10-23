namespace kp
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            bt1 = new Button();
            bt2 = new Button();
            bt3 = new Button();
            pl = new Panel();
            pB2 = new PictureBox();
            pB1 = new PictureBox();
            trb1 = new TrackBar();
            trb2 = new TrackBar();
            bt4 = new Button();
            bt5 = new Button();
            trb3 = new TrackBar();
            trb4 = new TrackBar();
            label1 = new Label();
            label2 = new Label();
            label3 = new Label();
            label4 = new Label();
            label5 = new Label();
            timer1 = new System.Windows.Forms.Timer(components);
            pl.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)pB2).BeginInit();
            ((System.ComponentModel.ISupportInitialize)pB1).BeginInit();
            ((System.ComponentModel.ISupportInitialize)trb1).BeginInit();
            ((System.ComponentModel.ISupportInitialize)trb2).BeginInit();
            ((System.ComponentModel.ISupportInitialize)trb3).BeginInit();
            ((System.ComponentModel.ISupportInitialize)trb4).BeginInit();
            SuspendLayout();
            // 
            // bt1
            // 
            bt1.Location = new Point(1030, 180);
            bt1.Name = "bt1";
            bt1.Size = new Size(112, 66);
            bt1.TabIndex = 0;
            bt1.Text = "virBox1 stop/start";
            bt1.UseVisualStyleBackColor = true;
            bt1.Click += bt1_Click;
            // 
            // bt2
            // 
            bt2.Location = new Point(1030, 305);
            bt2.Name = "bt2";
            bt2.Size = new Size(112, 72);
            bt2.TabIndex = 1;
            bt2.Text = "virBox2 stop/start";
            bt2.UseVisualStyleBackColor = true;
            bt2.Click += button2_Click;
            // 
            // bt3
            // 
            bt3.Location = new Point(1030, 497);
            bt3.Name = "bt3";
            bt3.Size = new Size(112, 34);
            bt3.TabIndex = 2;
            bt3.Text = "exit";
            bt3.UseVisualStyleBackColor = true;
            bt3.Click += bt3_Click;
            // 
            // pl
            // 
            pl.BackColor = SystemColors.ActiveCaption;
            pl.Controls.Add(pB2);
            pl.Controls.Add(pB1);
            pl.Location = new Point(354, 99);
            pl.Name = "pl";
            pl.Size = new Size(400, 400);
            pl.TabIndex = 3;
            // 
            // pB2
            // 
            pB2.Image = (Image)resources.GetObject("pB2.Image");
            pB2.Location = new Point(172, 357);
            pB2.Name = "pB2";
            pB2.Size = new Size(40, 40);
            pB2.SizeMode = PictureBoxSizeMode.Zoom;
            pB2.TabIndex = 1;
            pB2.TabStop = false;
            // 
            // pB1
            // 
            pB1.Image = (Image)resources.GetObject("pB1.Image");
            pB1.Location = new Point(348, 184);
            pB1.Name = "pB1";
            pB1.Size = new Size(40, 40);
            pB1.SizeMode = PictureBoxSizeMode.Zoom;
            pB1.TabIndex = 0;
            pB1.TabStop = false;
            pB1.Click += pB1_Click;
            // 
            // trb1
            // 
            trb1.Location = new Point(354, 532);
            trb1.Maximum = 360;
            trb1.Name = "trb1";
            trb1.Size = new Size(400, 69);
            trb1.TabIndex = 4;
            trb1.Scroll += trb1_Scroll;
            // 
            // trb2
            // 
            trb2.Location = new Point(354, 607);
            trb2.Maximum = 360;
            trb2.Name = "trb2";
            trb2.Size = new Size(400, 69);
            trb2.TabIndex = 5;
            trb2.Scroll += trb2_Scroll;
            // 
            // bt4
            // 
            bt4.Location = new Point(518, 502);
            bt4.Name = "bt4";
            bt4.Size = new Size(48, 34);
            bt4.TabIndex = 10;
            bt4.Text = "v";
            bt4.UseVisualStyleBackColor = true;
            // 
            // bt5
            // 
            bt5.Location = new Point(526, 50);
            bt5.Name = "bt5";
            bt5.Size = new Size(48, 34);
            bt5.TabIndex = 11;
            bt5.Text = "^";
            bt5.UseVisualStyleBackColor = true;
            // 
            // trb3
            // 
            trb3.Location = new Point(22, 146);
            trb3.Maximum = 360;
            trb3.Name = "trb3";
            trb3.Orientation = Orientation.Vertical;
            trb3.Size = new Size(69, 283);
            trb3.TabIndex = 12;
            trb3.Scroll += trb3_Scroll;
            // 
            // trb4
            // 
            trb4.Location = new Point(198, 146);
            trb4.Maximum = 360;
            trb4.Name = "trb4";
            trb4.Orientation = Orientation.Vertical;
            trb4.Size = new Size(69, 283);
            trb4.TabIndex = 13;
            trb4.Scroll += trb4_Scroll;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(1030, 431);
            label1.Name = "label1";
            label1.Size = new Size(26, 24);
            label1.TabIndex = 14;
            label1.Text = "0 ";
            label1.Click += label1_Click;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(260, 532);
            label2.Name = "label2";
            label2.Size = new Size(81, 24);
            label2.TabIndex = 15;
            label2.Text = "1_speed";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(260, 607);
            label3.Name = "label3";
            label3.Size = new Size(75, 24);
            label3.TabIndex = 16;
            label3.Text = "1_place";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(22, 488);
            label4.Name = "label4";
            label4.Size = new Size(81, 24);
            label4.TabIndex = 17;
            label4.Text = "2_speed";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(192, 488);
            label5.Name = "label5";
            label5.Size = new Size(75, 24);
            label5.TabIndex = 18;
            label5.Text = "2_place";
            // 
            // timer1
            // 
            timer1.Enabled = true;
            timer1.Interval = 50;
            timer1.Tick += timer1_Tick;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(11F, 24F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1298, 726);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Controls.Add(trb4);
            Controls.Add(trb3);
            Controls.Add(bt5);
            Controls.Add(bt4);
            Controls.Add(trb2);
            Controls.Add(trb1);
            Controls.Add(pl);
            Controls.Add(bt3);
            Controls.Add(bt2);
            Controls.Add(bt1);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            pl.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)pB2).EndInit();
            ((System.ComponentModel.ISupportInitialize)pB1).EndInit();
            ((System.ComponentModel.ISupportInitialize)trb1).EndInit();
            ((System.ComponentModel.ISupportInitialize)trb2).EndInit();
            ((System.ComponentModel.ISupportInitialize)trb3).EndInit();
            ((System.ComponentModel.ISupportInitialize)trb4).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button bt1;
        private Button bt2;
        private Button bt3;
        private Panel pl;
        private PictureBox pB2;
        private PictureBox pB1;
        private TrackBar trb1;
        private TrackBar trb2;
        private Button bt4;
        private Button bt5;
        private TrackBar trb3;
        private TrackBar trb4;
        private Label label1;
        private Label label2;
        private Label label3;
        private Label label4;
        private Label label5;
        private System.Windows.Forms.Timer timer1;
    }
}
