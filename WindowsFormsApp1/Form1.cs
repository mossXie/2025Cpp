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

        int X = 100;
        int Y = 100;
        int R = 50;
        double alpha = 0.0;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            numx.Value = X;
            numy.Value = Y;
            numr.Value = R;
            pt.Left = X + R - pt.Width / 2;//zhong xin pc 
            pt.Top = Y - R - pt.Height / 2;//ufo pt
            pc.Left = X - pc.Width / 2;
            pc.Top = Y - pc.Height / 2;
            
        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void pt_Click(object sender, EventArgs e)
        {
            pt.Enabled = !pt.Enabled;

        }

        private void contextMenuStrip1_Opening(object sender, CancelEventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            time.Enabled = true;

        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void time_Tick(object sender, EventArgs e)
        {
            alpha += 0.05;
            pt.Left = (int)(X + R * Math.Cos(alpha));
            pt.Top = (int)(Y - R * Math.Sin(alpha));

            
        }

        private void pt1_Click(object sender, EventArgs e)
        {

        }

        private void numx_ValueChanged(object sender, EventArgs e)
        {
            X = (int)numx.Value;
        }

        private void numy_ValueChanged(object sender, EventArgs e)
        {
            Y = (int)numy.Value;
        }

        private void numr_ValueChanged(object sender, EventArgs e)
        {
            R = (int)numr.Value;
        }
    }
}
