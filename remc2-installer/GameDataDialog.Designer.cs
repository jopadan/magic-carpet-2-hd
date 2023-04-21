﻿namespace WixSharpSetup
{
    partial class GameDataDialog
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.banner = new System.Windows.Forms.PictureBox();
            this.panel2 = new System.Windows.Forms.Panel();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.panel1 = new System.Windows.Forms.Panel();
            this.btnCancel = new System.Windows.Forms.Button();
            this.btnNext = new System.Windows.Forms.Button();
            this.cboInstallLocation = new System.Windows.Forms.ComboBox();
            this.lblInstallLocation = new System.Windows.Forms.Label();
            this.txtPath = new System.Windows.Forms.TextBox();
            this.btnBrowse = new System.Windows.Forms.Button();
            this.txtCDPath = new System.Windows.Forms.TextBox();
            this.btnBrowseCDFiles = new System.Windows.Forms.Button();
            this.grpInstructions = new System.Windows.Forms.GroupBox();
            this.txtInstructions = new System.Windows.Forms.RichTextBox();
            ((System.ComponentModel.ISupportInitialize)(this.banner)).BeginInit();
            this.panel2.SuspendLayout();
            this.panel1.SuspendLayout();
            this.grpInstructions.SuspendLayout();
            this.SuspendLayout();
            // 
            // banner
            // 
            this.banner.BackColor = System.Drawing.Color.White;
            this.banner.Dock = System.Windows.Forms.DockStyle.Fill;
            this.banner.Location = new System.Drawing.Point(0, 0);
            this.banner.Name = "banner";
            this.banner.Size = new System.Drawing.Size(501, 59);
            this.banner.TabIndex = 0;
            this.banner.TabStop = false;
            // 
            // panel2
            // 
            this.panel2.BackColor = System.Drawing.SystemColors.Control;
            this.panel2.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.panel2.Controls.Add(this.label2);
            this.panel2.Controls.Add(this.label1);
            this.panel2.Controls.Add(this.banner);
            this.panel2.Location = new System.Drawing.Point(-5, -5);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(503, 61);
            this.panel2.TabIndex = 10;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.Color.White;
            this.label2.Font = new System.Drawing.Font("Tahoma", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(30, 31);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(307, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Please select where to get the Magic Carpet 2 game data from";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.White;
            this.label1.Font = new System.Drawing.Font("Tahoma", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(16, 8);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(130, 14);
            this.label1.TabIndex = 1;
            this.label1.Text = "Game Data Location";
            // 
            // panel1
            // 
            this.panel1.BackColor = System.Drawing.SystemColors.Control;
            this.panel1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.panel1.Controls.Add(this.btnCancel);
            this.panel1.Controls.Add(this.btnNext);
            this.panel1.Location = new System.Drawing.Point(-3, 308);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(503, 57);
            this.panel1.TabIndex = 9;
            // 
            // btnCancel
            // 
            this.btnCancel.Font = new System.Drawing.Font("Tahoma", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnCancel.Location = new System.Drawing.Point(409, 17);
            this.btnCancel.Name = "btnCancel";
            this.btnCancel.Size = new System.Drawing.Size(75, 23);
            this.btnCancel.TabIndex = 1;
            this.btnCancel.Text = "Exit";
            this.btnCancel.UseVisualStyleBackColor = true;
            this.btnCancel.Click += new System.EventHandler(this.btnCancel_Click);
            // 
            // btnNext
            // 
            this.btnNext.Font = new System.Drawing.Font("Tahoma", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnNext.Location = new System.Drawing.Point(328, 17);
            this.btnNext.Name = "btnNext";
            this.btnNext.Size = new System.Drawing.Size(75, 23);
            this.btnNext.TabIndex = 0;
            this.btnNext.Text = "Next";
            this.btnNext.UseVisualStyleBackColor = true;
            this.btnNext.Click += new System.EventHandler(this.btnNext_Click);
            // 
            // cboInstallLocation
            // 
            this.cboInstallLocation.FormattingEnabled = true;
            this.cboInstallLocation.Items.AddRange(new object[] {
            "GOG Edition",
            "DOS Edition"});
            this.cboInstallLocation.Location = new System.Drawing.Point(101, 213);
            this.cboInstallLocation.Name = "cboInstallLocation";
            this.cboInstallLocation.Size = new System.Drawing.Size(205, 21);
            this.cboInstallLocation.TabIndex = 3;
            // 
            // lblInstallLocation
            // 
            this.lblInstallLocation.AutoSize = true;
            this.lblInstallLocation.Location = new System.Drawing.Point(12, 216);
            this.lblInstallLocation.Name = "lblInstallLocation";
            this.lblInstallLocation.Size = new System.Drawing.Size(81, 13);
            this.lblInstallLocation.TabIndex = 2;
            this.lblInstallLocation.Text = "Get Data From:";
            // 
            // txtPath
            // 
            this.txtPath.Location = new System.Drawing.Point(86, 247);
            this.txtPath.Margin = new System.Windows.Forms.Padding(3, 10, 3, 3);
            this.txtPath.Name = "txtPath";
            this.txtPath.Size = new System.Drawing.Size(396, 21);
            this.txtPath.TabIndex = 5;
            this.txtPath.TextChanged += new System.EventHandler(this.Path_TextChanged);
            // 
            // btnBrowse
            // 
            this.btnBrowse.Location = new System.Drawing.Point(11, 245);
            this.btnBrowse.Name = "btnBrowse";
            this.btnBrowse.Size = new System.Drawing.Size(68, 23);
            this.btnBrowse.TabIndex = 4;
            this.btnBrowse.Text = "Browse";
            this.btnBrowse.UseVisualStyleBackColor = true;
            this.btnBrowse.Click += new System.EventHandler(this.btnBrowse_Click);
            // 
            // txtCDPath
            // 
            this.txtCDPath.Location = new System.Drawing.Point(86, 281);
            this.txtCDPath.Margin = new System.Windows.Forms.Padding(3, 10, 3, 3);
            this.txtCDPath.Name = "txtCDPath";
            this.txtCDPath.Size = new System.Drawing.Size(396, 21);
            this.txtCDPath.TabIndex = 11;
            this.txtCDPath.TextChanged += new System.EventHandler(this.Path_TextChanged);
            // 
            // btnBrowseCDFiles
            // 
            this.btnBrowseCDFiles.Location = new System.Drawing.Point(12, 279);
            this.btnBrowseCDFiles.Name = "btnBrowseCDFiles";
            this.btnBrowseCDFiles.Size = new System.Drawing.Size(68, 23);
            this.btnBrowseCDFiles.TabIndex = 12;
            this.btnBrowseCDFiles.Text = "Browse";
            this.btnBrowseCDFiles.UseVisualStyleBackColor = true;
            this.btnBrowseCDFiles.Click += new System.EventHandler(this.btnBrowseCDFiles_Click);
            // 
            // grpInstructions
            // 
            this.grpInstructions.Controls.Add(this.txtInstructions);
            this.grpInstructions.Location = new System.Drawing.Point(11, 63);
            this.grpInstructions.Name = "grpInstructions";
            this.grpInstructions.Size = new System.Drawing.Size(471, 144);
            this.grpInstructions.TabIndex = 14;
            this.grpInstructions.TabStop = false;
            this.grpInstructions.Text = "Instructions";
            // 
            // txtInstructions
            // 
            this.txtInstructions.Dock = System.Windows.Forms.DockStyle.Fill;
            this.txtInstructions.Location = new System.Drawing.Point(3, 17);
            this.txtInstructions.Name = "txtInstructions";
            this.txtInstructions.ReadOnly = true;
            this.txtInstructions.Size = new System.Drawing.Size(465, 124);
            this.txtInstructions.TabIndex = 15;
            this.txtInstructions.Text = "";
            // 
            // GameDataDialog
            // 
            this.ClientSize = new System.Drawing.Size(494, 361);
            this.Controls.Add(this.grpInstructions);
            this.Controls.Add(this.btnBrowseCDFiles);
            this.Controls.Add(this.txtCDPath);
            this.Controls.Add(this.btnBrowse);
            this.Controls.Add(this.txtPath);
            this.Controls.Add(this.lblInstallLocation);
            this.Controls.Add(this.cboInstallLocation);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.panel1);
            this.Font = new System.Drawing.Font("Tahoma", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.MaximizeBox = false;
            this.MaximumSize = new System.Drawing.Size(510, 400);
            this.MinimumSize = new System.Drawing.Size(510, 400);
            this.Name = "GameDataDialog";
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Hide;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Game Data";
            this.Load += new System.EventHandler(this.dialog_Load);
            ((System.ComponentModel.ISupportInitialize)(this.banner)).EndInit();
            this.panel2.ResumeLayout(false);
            this.panel2.PerformLayout();
            this.panel1.ResumeLayout(false);
            this.grpInstructions.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox banner;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Button btnNext;
        private System.Windows.Forms.ComboBox cboInstallLocation;
        private System.Windows.Forms.Label lblInstallLocation;
        private System.Windows.Forms.TextBox txtPath;
        private System.Windows.Forms.Button btnBrowse;
        private System.Windows.Forms.Button btnCancel;
        private System.Windows.Forms.TextBox txtCDPath;
        private System.Windows.Forms.Button btnBrowseCDFiles;
        private System.Windows.Forms.GroupBox grpInstructions;
        private System.Windows.Forms.RichTextBox txtInstructions;
    }
}