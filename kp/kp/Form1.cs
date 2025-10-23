using System.Collections.Specialized;

namespace kp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int X_pb1 = 1;
        int Y_pb1 = 1;
        int X_pb2 = 1;
        int Y_pb2 = 1;
        int pb1_fx = 1;
        int pb2_fx = 1;
        double alpha = 0.0;
        double speed = 0.05;

        bool pb1mooving = true;
        bool pb2mooving = true;


        private void bt1_Click(object sender, EventArgs e)
        {
            pb1mooving = !pb1mooving;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            pb2mooving = !pb2mooving;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void bt3_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void trb1_Scroll(object sender, EventArgs e)
        {
            //X_pb1 += trb1.Value;
        }

        private void trb2_Scroll(object sender, EventArgs e)
        {
            //Y_pb1 += trb2.Value;
        }

        private void trb4_Scroll(object sender, EventArgs e)
        {
            //Y_pb2 += trb4.Value;
        }

        private void trb3_Scroll(object sender, EventArgs e)
        {
            //X_pb2 += trb3.Value;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            int pb1_speed = trb1.Value;
            int pb1_k = trb2.Value;
            int pb2_speed = trb3.Value;
            int pb2_k = trb4.Value;

            if (pb1mooving)
            {
                int newVirBox1X = pB1.Left + (pb1_speed * pb1_fx);
                if (newVirBox1X <= 0 || newVirBox1X >= pl.Width - pB1.Width)
                {
                    pb1_fx *= -1;
                    newVirBox1X = Math.Max(0, Math.Min(pl.Width - pB1.Width, newVirBox1X));
                }
                pB1.Left = newVirBox1X;
                pB1.Top = 
            }

            if (pb2mooving)
            {
                int newVirBox2Y = pB2.Top + (pb2_speed * pb2_fx);
                if (newVirBox2Y <= 0 || newVirBox2Y >= pl.Height - pB2.Height)
                {
                    pb2_fx *= -1;
                    newVirBox2Y = Math.Max(0, Math.Min(pl.Height - pB2.Height, newVirBox2Y));
                }
                pB2.Top = newVirBox2Y;
            }

            touchChange();

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void pB1_Click(object sender, EventArgs e)
        {

        }

        int cot1 = 0;
        private void touchChange()
        { 
            Rectangle res1 = new Rectangle(pB1.Location, pB1.Size);
            Rectangle res2 = new Rectangle(pB2.Location, pB2.Size);

            res1.Inflate(5, 5);
            res2.Inflate(5, 5);
            
            if (res1.IntersectsWith(res2)) {
                cot1++;
                label1.Text = cot1.ToString();
            }
        }
    }
}
