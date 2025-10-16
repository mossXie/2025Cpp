
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
            this.tb = new System.Windows.Forms.TextBox();
            this.but0 = new System.Windows.Forms.Button();
            this.butP = new System.Windows.Forms.Button();
            this.butE = new System.Windows.Forms.Button();
            this.butPM = new System.Windows.Forms.Button();
            this.butDot = new System.Windows.Forms.Button();
            this.butD = new System.Windows.Forms.Button();
            this.butm = new System.Windows.Forms.Button();
            this.butS = new System.Windows.Forms.Button();
            this.butC = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // tb
            // 
            this.tb.Location = new System.Drawing.Point(70, 21);
            this.tb.Name = "tb";
            this.tb.Size = new System.Drawing.Size(320, 20);
            this.tb.TabIndex = 0;
            this.tb.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // but0
            // 
            this.but0.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.but0.Location = new System.Drawing.Point(70, 146);
            this.but0.Name = "but0";
            this.but0.Size = new System.Drawing.Size(40, 40);
            this.but0.TabIndex = 1;
            this.but0.Text = "0";
            this.but0.UseVisualStyleBackColor = true;
            this.but0.Click += new System.EventHandler(this.but0_Click);
            // 
            // butP
            // 
            this.butP.Location = new System.Drawing.Point(294, 149);
            this.butP.Name = "butP";
            this.butP.Size = new System.Drawing.Size(38, 36);
            this.butP.TabIndex = 2;
            this.butP.Text = "+";
            this.butP.UseVisualStyleBackColor = true;
            this.butP.Click += new System.EventHandler(this.butp_Click_1);
            // 
            // butE
            // 
            this.butE.Location = new System.Drawing.Point(70, 354);
            this.butE.Name = "butE";
            this.butE.Size = new System.Drawing.Size(75, 23);
            this.butE.TabIndex = 3;
            this.butE.Text = "=";
            this.butE.UseVisualStyleBackColor = true;
            this.butE.Click += new System.EventHandler(this.button1_Click);
            // 
            // butPM
            // 
            this.butPM.Location = new System.Drawing.Point(556, 218);
            this.butPM.Name = "butPM";
            this.butPM.Size = new System.Drawing.Size(75, 23);
            this.butPM.TabIndex = 4;
            this.butPM.Text = "+/-";
            this.butPM.UseVisualStyleBackColor = true;
            this.butPM.Click += new System.EventHandler(this.button1_Click_1);
            // 
            // butDot
            // 
            this.butDot.Location = new System.Drawing.Point(556, 146);
            this.butDot.Name = "butDot";
            this.butDot.Size = new System.Drawing.Size(75, 23);
            this.butDot.TabIndex = 5;
            this.butDot.Text = ",";
            this.butDot.UseVisualStyleBackColor = true;
            this.butDot.Click += new System.EventHandler(this.butDot_Click);
            // 
            // butD
            // 
            this.butD.Location = new System.Drawing.Point(384, 149);
            this.butD.Name = "butD";
            this.butD.Size = new System.Drawing.Size(49, 36);
            this.butD.TabIndex = 6;
            this.butD.Text = "*";
            this.butD.UseVisualStyleBackColor = true;
            this.butD.Click += new System.EventHandler(this.button1_Click_2);
            // 
            // butm
            // 
            this.butm.Location = new System.Drawing.Point(384, 205);
            this.butm.Name = "butm";
            this.butm.Size = new System.Drawing.Size(49, 36);
            this.butm.TabIndex = 7;
            this.butm.Text = "/";
            this.butm.UseVisualStyleBackColor = true;
            this.butm.Click += new System.EventHandler(this.butm_Click);
            // 
            // butS
            // 
            this.butS.Location = new System.Drawing.Point(294, 205);
            this.butS.Name = "butS";
            this.butS.Size = new System.Drawing.Size(38, 36);
            this.butS.TabIndex = 8;
            this.butS.Text = "-";
            this.butS.UseVisualStyleBackColor = true;
            this.butS.Click += new System.EventHandler(this.butS_Click);
            // 
            // butC
            // 
            this.butC.Location = new System.Drawing.Point(285, 354);
            this.butC.Name = "butC";
            this.butC.Size = new System.Drawing.Size(75, 23);
            this.butC.TabIndex = 9;
            this.butC.Text = "clear";
            this.butC.UseVisualStyleBackColor = true;
            this.butC.Click += new System.EventHandler(this.button1_Click_3);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.butC);
            this.Controls.Add(this.butS);
            this.Controls.Add(this.butm);
            this.Controls.Add(this.butD);
            this.Controls.Add(this.butDot);
            this.Controls.Add(this.butPM);
            this.Controls.Add(this.butE);
            this.Controls.Add(this.butP);
            this.Controls.Add(this.but0);
            this.Controls.Add(this.tb);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox tb;
        private System.Windows.Forms.Button but0;
        private System.Windows.Forms.Button butP;
        private System.Windows.Forms.Button butE;
        private System.Windows.Forms.Button butPM;
        private System.Windows.Forms.Button butDot;
        private System.Windows.Forms.Button butD;
        private System.Windows.Forms.Button butm;
        private System.Windows.Forms.Button butS;
        private System.Windows.Forms.Button butC;
    }
}

