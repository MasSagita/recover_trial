#pragma once
#include <array>
namespace recoverv1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  printToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  keluarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  panduanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tentangToolStripMenuItem;






















































































	private: System::Windows::Forms::ToolTip^  toolTip1;


















































private: System::Windows::Forms::Button^  btnReset;
private: System::Windows::Forms::Button^  btnKeluar;





























































private: System::Windows::Forms::Button^  btnDetail;
private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::GroupBox^  groupBox15;
private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::ComboBox^  comboBox7;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::GroupBox^  groupBox13;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::TextBox^  textBox17;
private: System::Windows::Forms::RadioButton^  radioButton11;
private: System::Windows::Forms::RadioButton^  radioButton12;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::RadioButton^  radioButton13;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::ListBox^  listBox8;
private: System::Windows::Forms::ListBox^  listBox10;
private: System::Windows::Forms::ListBox^  listBox9;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::ListBox^  listBox5;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::ListBox^  listBox6;
private: System::Windows::Forms::ListBox^  listBox7;
private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::ListBox^  listBox4;
private: System::Windows::Forms::ListBox^  listBox3;
private: System::Windows::Forms::ListBox^  listBox2;
private: System::Windows::Forms::ListBox^  listBox1;
private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::RadioButton^  radioButton10;
private: System::Windows::Forms::RadioButton^  radioButton9;
private: System::Windows::Forms::RadioButton^  radioButton8;
private: System::Windows::Forms::RadioButton^  radioButton7;
private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::GroupBox^  gBSampel;
private: System::Windows::Forms::Label^  sampleGel6;
private: System::Windows::Forms::Label^  sampleGel5;
private: System::Windows::Forms::Label^  sampleGel4;
private: System::Windows::Forms::Label^  sampleGel1;
private: System::Windows::Forms::Label^  sampleGel3;
private: System::Windows::Forms::Label^  sampleGel2;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Button^  btnHitung;
private: System::Windows::Forms::TextBox^  tBResMin;
private: System::Windows::Forms::TextBox^  tBNilaiToleransi;
private: System::Windows::Forms::TextBox^  tBResMax;
private: System::Windows::Forms::TextBox^  tBTemp;
private: System::Windows::Forms::TextBox^  tBNilaiResistansi;
private: System::Windows::Forms::RadioButton^  rBMOhm;
private: System::Windows::Forms::RadioButton^  rBKOhm;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::RadioButton^  rBOhm;
private: System::Windows::Forms::TabControl^  tabControl2;
private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Label^  lbKet;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::RadioButton^  radioButton3;
private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::RadioButton^  radioButton1;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::GroupBox^  gBGelTemp;
private: System::Windows::Forms::Label^  lbMerahTemp;
private: System::Windows::Forms::Label^  lbKuningTemp;
private: System::Windows::Forms::Label^  lbJinggaTemp;
private: System::Windows::Forms::Label^  lbCokelatTemp;
private: System::Windows::Forms::GroupBox^  gBGelPengali;
private: System::Windows::Forms::Label^  lbEmasPengali;
private: System::Windows::Forms::Label^  lbHitamPengali;
private: System::Windows::Forms::Label^  lbMerahPengali;
private: System::Windows::Forms::Label^  lbUnguPengali;
private: System::Windows::Forms::Label^  lbBiruPengali;
private: System::Windows::Forms::Label^  lbKuningPengali;
private: System::Windows::Forms::Label^  lbHijauPengali;
private: System::Windows::Forms::Label^  lbJinggaPengali;
private: System::Windows::Forms::Label^  lbSilverPengali;
private: System::Windows::Forms::Label^  lbCokelatPengali;
private: System::Windows::Forms::GroupBox^  gBGel2;
private: System::Windows::Forms::Label^  lbPutih2;
private: System::Windows::Forms::Label^  lbHitam2;
private: System::Windows::Forms::Label^  lbMerah2;
private: System::Windows::Forms::Label^  lbUngu2;
private: System::Windows::Forms::Label^  lbBiru2;
private: System::Windows::Forms::Label^  lbKuning2;
private: System::Windows::Forms::Label^  lbHijau2;
private: System::Windows::Forms::Label^  lbJingga2;
private: System::Windows::Forms::Label^  lbAbu2;
private: System::Windows::Forms::Label^  lbCokelat2;
private: System::Windows::Forms::GroupBox^  gBGelToleransi;
private: System::Windows::Forms::Label^  lbEmasToleransi;
private: System::Windows::Forms::Label^  lbMerahToleransi;
private: System::Windows::Forms::Label^  lbUnguToleransi;
private: System::Windows::Forms::Label^  lbBiruToleransi;
private: System::Windows::Forms::Label^  lbHijauToleransi;
private: System::Windows::Forms::Label^  lbAbuToleransi;
private: System::Windows::Forms::Label^  lbCokelatToleransi;
private: System::Windows::Forms::Label^  lbKosongToleransi;
private: System::Windows::Forms::Label^  lbSilverToleransi;
private: System::Windows::Forms::GroupBox^  gBGel3;
private: System::Windows::Forms::Label^  lbPutih3;
private: System::Windows::Forms::Label^  lbHitam3;
private: System::Windows::Forms::Label^  lbMerah3;
private: System::Windows::Forms::Label^  lbUngu3;
private: System::Windows::Forms::Label^  lbBiru3;
private: System::Windows::Forms::Label^  lbKuning3;
private: System::Windows::Forms::Label^  lbHijau3;
private: System::Windows::Forms::Label^  lbJingga3;
private: System::Windows::Forms::Label^  lbAbu3;
private: System::Windows::Forms::Label^  lbCokelat3;
private: System::Windows::Forms::GroupBox^  gBGel1;
private: System::Windows::Forms::Label^  lbPutih1;
private: System::Windows::Forms::Label^  lbHitam1;
private: System::Windows::Forms::Label^  lbMerah1;
private: System::Windows::Forms::Label^  lbUngu1;
private: System::Windows::Forms::Label^  lbBiru1;
private: System::Windows::Forms::Label^  lbKuning1;
private: System::Windows::Forms::Label^  lbHijau1;
private: System::Windows::Forms::Label^  lbJingga1;
private: System::Windows::Forms::Label^  lbAbu1;
private: System::Windows::Forms::Label^  lbCokelat1;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::RadioButton^  radioButton4;
private: System::Windows::Forms::RadioButton^  radioButton5;
private: System::Windows::Forms::RadioButton^  radioButton6;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::ComboBox^  comboBox3;
private: System::Windows::Forms::ComboBox^  comboBox4;
private: System::Windows::Forms::ComboBox^  comboBox5;
private: System::Windows::Forms::ComboBox^  comboBox6;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TextBox^  textBox10;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  textBox9;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TabControl^  tabControl1;




































































































































































































































































































































































private: System::ComponentModel::IContainer^  components;
protected: 
protected:
private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->keluarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panduanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tentangToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->btnDetail = (gcnew System::Windows::Forms::Button());
			this->btnKeluar = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->listBox9 = (gcnew System::Windows::Forms::ListBox());
			this->listBox10 = (gcnew System::Windows::Forms::ListBox());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->gBGel1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbCokelat1 = (gcnew System::Windows::Forms::Label());
			this->lbAbu1 = (gcnew System::Windows::Forms::Label());
			this->lbJingga1 = (gcnew System::Windows::Forms::Label());
			this->lbHijau1 = (gcnew System::Windows::Forms::Label());
			this->lbKuning1 = (gcnew System::Windows::Forms::Label());
			this->lbBiru1 = (gcnew System::Windows::Forms::Label());
			this->lbUngu1 = (gcnew System::Windows::Forms::Label());
			this->lbMerah1 = (gcnew System::Windows::Forms::Label());
			this->lbHitam1 = (gcnew System::Windows::Forms::Label());
			this->lbPutih1 = (gcnew System::Windows::Forms::Label());
			this->gBGel3 = (gcnew System::Windows::Forms::GroupBox());
			this->lbCokelat3 = (gcnew System::Windows::Forms::Label());
			this->lbAbu3 = (gcnew System::Windows::Forms::Label());
			this->lbJingga3 = (gcnew System::Windows::Forms::Label());
			this->lbHijau3 = (gcnew System::Windows::Forms::Label());
			this->lbKuning3 = (gcnew System::Windows::Forms::Label());
			this->lbBiru3 = (gcnew System::Windows::Forms::Label());
			this->lbUngu3 = (gcnew System::Windows::Forms::Label());
			this->lbMerah3 = (gcnew System::Windows::Forms::Label());
			this->lbHitam3 = (gcnew System::Windows::Forms::Label());
			this->lbPutih3 = (gcnew System::Windows::Forms::Label());
			this->gBGelToleransi = (gcnew System::Windows::Forms::GroupBox());
			this->lbSilverToleransi = (gcnew System::Windows::Forms::Label());
			this->lbKosongToleransi = (gcnew System::Windows::Forms::Label());
			this->lbCokelatToleransi = (gcnew System::Windows::Forms::Label());
			this->lbAbuToleransi = (gcnew System::Windows::Forms::Label());
			this->lbHijauToleransi = (gcnew System::Windows::Forms::Label());
			this->lbBiruToleransi = (gcnew System::Windows::Forms::Label());
			this->lbUnguToleransi = (gcnew System::Windows::Forms::Label());
			this->lbMerahToleransi = (gcnew System::Windows::Forms::Label());
			this->lbEmasToleransi = (gcnew System::Windows::Forms::Label());
			this->gBGel2 = (gcnew System::Windows::Forms::GroupBox());
			this->lbCokelat2 = (gcnew System::Windows::Forms::Label());
			this->lbAbu2 = (gcnew System::Windows::Forms::Label());
			this->lbJingga2 = (gcnew System::Windows::Forms::Label());
			this->lbHijau2 = (gcnew System::Windows::Forms::Label());
			this->lbKuning2 = (gcnew System::Windows::Forms::Label());
			this->lbBiru2 = (gcnew System::Windows::Forms::Label());
			this->lbUngu2 = (gcnew System::Windows::Forms::Label());
			this->lbMerah2 = (gcnew System::Windows::Forms::Label());
			this->lbHitam2 = (gcnew System::Windows::Forms::Label());
			this->lbPutih2 = (gcnew System::Windows::Forms::Label());
			this->gBGelPengali = (gcnew System::Windows::Forms::GroupBox());
			this->lbCokelatPengali = (gcnew System::Windows::Forms::Label());
			this->lbSilverPengali = (gcnew System::Windows::Forms::Label());
			this->lbJinggaPengali = (gcnew System::Windows::Forms::Label());
			this->lbHijauPengali = (gcnew System::Windows::Forms::Label());
			this->lbKuningPengali = (gcnew System::Windows::Forms::Label());
			this->lbBiruPengali = (gcnew System::Windows::Forms::Label());
			this->lbUnguPengali = (gcnew System::Windows::Forms::Label());
			this->lbMerahPengali = (gcnew System::Windows::Forms::Label());
			this->lbHitamPengali = (gcnew System::Windows::Forms::Label());
			this->lbEmasPengali = (gcnew System::Windows::Forms::Label());
			this->gBGelTemp = (gcnew System::Windows::Forms::GroupBox());
			this->lbCokelatTemp = (gcnew System::Windows::Forms::Label());
			this->lbJinggaTemp = (gcnew System::Windows::Forms::Label());
			this->lbKuningTemp = (gcnew System::Windows::Forms::Label());
			this->lbMerahTemp = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->lbKet = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rBOhm = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rBKOhm = (gcnew System::Windows::Forms::RadioButton());
			this->rBMOhm = (gcnew System::Windows::Forms::RadioButton());
			this->tBNilaiResistansi = (gcnew System::Windows::Forms::TextBox());
			this->tBTemp = (gcnew System::Windows::Forms::TextBox());
			this->tBResMax = (gcnew System::Windows::Forms::TextBox());
			this->tBNilaiToleransi = (gcnew System::Windows::Forms::TextBox());
			this->tBResMin = (gcnew System::Windows::Forms::TextBox());
			this->btnHitung = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->gBSampel = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->sampleGel2 = (gcnew System::Windows::Forms::Label());
			this->sampleGel3 = (gcnew System::Windows::Forms::Label());
			this->sampleGel1 = (gcnew System::Windows::Forms::Label());
			this->sampleGel4 = (gcnew System::Windows::Forms::Label());
			this->sampleGel5 = (gcnew System::Windows::Forms::Label());
			this->sampleGel6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->menuStrip1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->gBGel1->SuspendLayout();
			this->gBGel3->SuspendLayout();
			this->gBGelToleransi->SuspendLayout();
			this->gBGel2->SuspendLayout();
			this->gBGelPengali->SuspendLayout();
			this->gBGelTemp->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->gBSampel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menuToolStripMenuItem,
					this->panduanToolStripMenuItem, this->tentangToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(730, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->printToolStripMenuItem,
					this->keluarToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->printToolStripMenuItem->Text = L"Print";
			// 
			// keluarToolStripMenuItem
			// 
			this->keluarToolStripMenuItem->Name = L"keluarToolStripMenuItem";
			this->keluarToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->keluarToolStripMenuItem->Text = L"Keluar";
			// 
			// panduanToolStripMenuItem
			// 
			this->panduanToolStripMenuItem->Name = L"panduanToolStripMenuItem";
			this->panduanToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->panduanToolStripMenuItem->Text = L"Panduan";
			// 
			// tentangToolStripMenuItem
			// 
			this->tentangToolStripMenuItem->Name = L"tentangToolStripMenuItem";
			this->tentangToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->tentangToolStripMenuItem->Text = L"Tentang";
			// 
			// btnReset
			// 
			this->btnReset->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnReset->Location = System::Drawing::Point(567, 533);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 24);
			this->btnReset->TabIndex = 5;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::btnReset_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->AutomaticDelay = 100;
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &Form1::toolTip1_Popup);
			// 
			// btnDetail
			// 
			this->btnDetail->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDetail->Location = System::Drawing::Point(486, 534);
			this->btnDetail->Name = L"btnDetail";
			this->btnDetail->Size = System::Drawing::Size(75, 23);
			this->btnDetail->TabIndex = 9;
			this->btnDetail->Text = L"Detail";
			this->btnDetail->UseVisualStyleBackColor = true;
			this->btnDetail->Click += gcnew System::EventHandler(this, &Form1::btnDetail_Click);
			// 
			// btnKeluar
			// 
			this->btnKeluar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnKeluar->Location = System::Drawing::Point(648, 532);
			this->btnKeluar->Name = L"btnKeluar";
			this->btnKeluar->Size = System::Drawing::Size(75, 24);
			this->btnKeluar->TabIndex = 5;
			this->btnKeluar->Text = L"Keluar";
			this->btnKeluar->UseVisualStyleBackColor = true;
			this->btnKeluar->Click += gcnew System::EventHandler(this, &Form1::btnKeluar_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox7);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(723, 476);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Resistor SMD";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->checkBox3);
			this->groupBox7->Controls->Add(this->groupBox15);
			this->groupBox7->Controls->Add(this->groupBox14);
			this->groupBox7->Controls->Add(this->groupBox13);
			this->groupBox7->Controls->Add(this->groupBox11);
			this->groupBox7->Controls->Add(this->groupBox10);
			this->groupBox7->Controls->Add(this->groupBox9);
			this->groupBox7->Controls->Add(this->groupBox8);
			this->groupBox7->Location = System::Drawing::Point(7, 7);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(709, 461);
			this->groupBox7->TabIndex = 0;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Resistor SMD";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->radioButton10);
			this->groupBox8->Controls->Add(this->radioButton9);
			this->groupBox8->Controls->Add(this->radioButton8);
			this->groupBox8->Controls->Add(this->radioButton7);
			this->groupBox8->Location = System::Drawing::Point(7, 20);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(563, 48);
			this->groupBox8->TabIndex = 0;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Tipe Resistor SMD";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(6, 19);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(117, 17);
			this->radioButton7->TabIndex = 0;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Sistem Kode 3 Digit";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(129, 19);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(117, 17);
			this->radioButton8->TabIndex = 0;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Sistem Kode 4 Digit";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(252, 19);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(118, 17);
			this->radioButton9->TabIndex = 0;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"E96 (1% Tolerance)";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(376, 19);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(186, 17);
			this->radioButton10->TabIndex = 0;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"E48, E12, E6 (2,5,10% Tolerance)";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->groupBox12);
			this->groupBox9->Location = System::Drawing::Point(7, 75);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(310, 229);
			this->groupBox9->TabIndex = 1;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"3 atau 4 Digit";
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->label25);
			this->groupBox12->Controls->Add(this->label24);
			this->groupBox12->Controls->Add(this->label23);
			this->groupBox12->Controls->Add(this->label22);
			this->groupBox12->Controls->Add(this->listBox4);
			this->groupBox12->Controls->Add(this->listBox3);
			this->groupBox12->Controls->Add(this->listBox2);
			this->groupBox12->Controls->Add(this->listBox1);
			this->groupBox12->Location = System::Drawing::Point(6, 19);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(298, 205);
			this->groupBox12->TabIndex = 1;
			this->groupBox12->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"R", L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->listBox1->Location = System::Drawing::Point(38, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(18, 180);
			this->listBox1->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"R", L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->listBox2->Location = System::Drawing::Point(108, 19);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(18, 180);
			this->listBox2->TabIndex = 0;
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"R", L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->listBox3->Location = System::Drawing::Point(182, 19);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(18, 180);
			this->listBox3->TabIndex = 0;
			// 
			// listBox4
			// 
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"R", L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->listBox4->Location = System::Drawing::Point(250, 19);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(18, 180);
			this->listBox4->TabIndex = 0;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(26, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(37, 13);
			this->label22->TabIndex = 1;
			this->label22->Text = L"Digit-1";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(99, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(37, 13);
			this->label23->TabIndex = 1;
			this->label23->Text = L"Digit-2";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(173, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(37, 13);
			this->label24->TabIndex = 1;
			this->label24->Text = L"Digit-3";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(243, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(37, 13);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Digit-4";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->label29);
			this->groupBox10->Controls->Add(this->label33);
			this->groupBox10->Controls->Add(this->listBox5);
			this->groupBox10->Controls->Add(this->label32);
			this->groupBox10->Controls->Add(this->listBox6);
			this->groupBox10->Controls->Add(this->listBox7);
			this->groupBox10->Location = System::Drawing::Point(323, 75);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(185, 229);
			this->groupBox10->TabIndex = 1;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"E96";
			// 
			// listBox7
			// 
			this->listBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox7->FormattingEnabled = true;
			this->listBox7->ItemHeight = 16;
			this->listBox7->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"R", L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->listBox7->Location = System::Drawing::Point(142, 38);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(18, 180);
			this->listBox7->TabIndex = 0;
			// 
			// listBox6
			// 
			this->listBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 16;
			this->listBox6->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"R", L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->listBox6->Location = System::Drawing::Point(80, 38);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(18, 180);
			this->listBox6->TabIndex = 0;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(71, 19);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(37, 13);
			this->label32->TabIndex = 1;
			this->label32->Text = L"Digit-2";
			// 
			// listBox5
			// 
			this->listBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 16;
			this->listBox5->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"R", L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->listBox5->Location = System::Drawing::Point(22, 38);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(18, 180);
			this->listBox5->TabIndex = 0;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(133, 19);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(37, 13);
			this->label33->TabIndex = 1;
			this->label33->Text = L"Digit-3";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(10, 19);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(37, 13);
			this->label29->TabIndex = 1;
			this->label29->Text = L"Digit-1";
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->label37);
			this->groupBox11->Controls->Add(this->label36);
			this->groupBox11->Controls->Add(this->listBox8);
			this->groupBox11->Controls->Add(this->listBox10);
			this->groupBox11->Controls->Add(this->listBox9);
			this->groupBox11->Controls->Add(this->label35);
			this->groupBox11->Location = System::Drawing::Point(518, 75);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(185, 229);
			this->groupBox11->TabIndex = 1;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"E96";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(75, 19);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(37, 13);
			this->label35->TabIndex = 1;
			this->label35->Text = L"Digit-2";
			// 
			// listBox9
			// 
			this->listBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox9->FormattingEnabled = true;
			this->listBox9->ItemHeight = 16;
			this->listBox9->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"R", L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->listBox9->Location = System::Drawing::Point(84, 38);
			this->listBox9->Name = L"listBox9";
			this->listBox9->Size = System::Drawing::Size(18, 180);
			this->listBox9->TabIndex = 0;
			// 
			// listBox10
			// 
			this->listBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox10->FormattingEnabled = true;
			this->listBox10->ItemHeight = 16;
			this->listBox10->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"R", L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->listBox10->Location = System::Drawing::Point(26, 38);
			this->listBox10->Name = L"listBox10";
			this->listBox10->Size = System::Drawing::Size(18, 180);
			this->listBox10->TabIndex = 0;
			// 
			// listBox8
			// 
			this->listBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox8->FormattingEnabled = true;
			this->listBox8->ItemHeight = 16;
			this->listBox8->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"R", L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->listBox8->Location = System::Drawing::Point(146, 38);
			this->listBox8->Name = L"listBox8";
			this->listBox8->Size = System::Drawing::Size(18, 180);
			this->listBox8->TabIndex = 0;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(137, 19);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(37, 13);
			this->label36->TabIndex = 1;
			this->label36->Text = L"Digit-3";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(14, 19);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(37, 13);
			this->label37->TabIndex = 1;
			this->label37->Text = L"Digit-1";
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->label26);
			this->groupBox13->Controls->Add(this->label27);
			this->groupBox13->Controls->Add(this->label28);
			this->groupBox13->Controls->Add(this->label30);
			this->groupBox13->Controls->Add(this->textBox13);
			this->groupBox13->Controls->Add(this->textBox14);
			this->groupBox13->Controls->Add(this->textBox15);
			this->groupBox13->Controls->Add(this->textBox17);
			this->groupBox13->Controls->Add(this->radioButton11);
			this->groupBox13->Controls->Add(this->radioButton12);
			this->groupBox13->Controls->Add(this->label31);
			this->groupBox13->Controls->Add(this->radioButton13);
			this->groupBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox13->Location = System::Drawing::Point(6, 310);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(369, 93);
			this->groupBox13->TabIndex = 8;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"HASIL";
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton13->Location = System::Drawing::Point(58, 17);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(47, 17);
			this->radioButton13->TabIndex = 3;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"Ohm";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(6, 19);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(47, 13);
			this->label31->TabIndex = 2;
			this->label31->Text = L"Satuan :";
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton12->Location = System::Drawing::Point(115, 17);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(67, 17);
			this->radioButton12->TabIndex = 3;
			this->radioButton12->Text = L"Kilo Ohm";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton11->Location = System::Drawing::Point(194, 17);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(77, 17);
			this->radioButton11->TabIndex = 3;
			this->radioButton11->Text = L"Mega Ohm";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(45, 37);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(198, 20);
			this->textBox17->TabIndex = 4;
			this->textBox17->Text = L"Niali Resistansi";
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(89, 67);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(118, 20);
			this->textBox15->TabIndex = 4;
			this->textBox15->Text = L"Resistansi Maximum";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(249, 37);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(115, 20);
			this->textBox14->TabIndex = 4;
			this->textBox14->Text = L"Toleransi (%)";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(233, 67);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(131, 20);
			this->textBox13->TabIndex = 4;
			this->textBox13->Text = L"Resistansi Minimum";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(7, 40);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(33, 13);
			this->label30->TabIndex = 2;
			this->label30->Text = L"Nilai :";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(6, 70);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(61, 13);
			this->label28->TabIndex = 2;
			this->label28->Text = L"Resistansi :";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(61, 70);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(27, 13);
			this->label27->TabIndex = 2;
			this->label27->Text = L"Max";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(207, 70);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(24, 13);
			this->label26->TabIndex = 2;
			this->label26->Text = L"Min";
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->comboBox7);
			this->groupBox14->Controls->Add(this->label34);
			this->groupBox14->Controls->Add(this->textBox18);
			this->groupBox14->Controls->Add(this->textBox20);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox14->Location = System::Drawing::Point(6, 409);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(371, 46);
			this->groupBox14->TabIndex = 8;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"KONVERSI NILAI";
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(45, 19);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(117, 20);
			this->textBox20->TabIndex = 4;
			this->textBox20->Text = L"Niali Resistansi";
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(168, 19);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(107, 20);
			this->textBox18->TabIndex = 4;
			this->textBox18->Text = L"Toleransi (%)";
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(7, 22);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(33, 13);
			this->label34->TabIndex = 2;
			this->label34->Text = L"Nilai :";
			// 
			// comboBox7
			// 
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(282, 19);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(83, 21);
			this->comboBox7->TabIndex = 5;
			// 
			// groupBox15
			// 
			this->groupBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->groupBox15->Location = System::Drawing::Point(383, 310);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(320, 145);
			this->groupBox15->TabIndex = 9;
			this->groupBox15->TabStop = false;
			this->groupBox15->Text = L"SAMPEL RESISTOR";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox3->Location = System::Drawing::Point(571, 39);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(132, 17);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"Aktifkan Konversi Nilai";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(723, 476);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Resistor Warna";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Location = System::Drawing::Point(3, 3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(716, 341);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->groupBox5);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(708, 315);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"Nilai ke Warna";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->checkBox2);
			this->groupBox5->Controls->Add(this->pictureBox2);
			this->groupBox5->Controls->Add(this->radioButton4);
			this->groupBox5->Controls->Add(this->radioButton5);
			this->groupBox5->Controls->Add(this->radioButton6);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->groupBox4);
			this->groupBox5->Controls->Add(this->groupBox6);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(6, 6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(696, 303);
			this->groupBox5->TabIndex = 20;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"NILAI RESISTOR";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->textBox12);
			this->groupBox6->Controls->Add(this->label19);
			this->groupBox6->Controls->Add(this->textBox11);
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Controls->Add(this->textBox10);
			this->groupBox6->Controls->Add(this->label17);
			this->groupBox6->Controls->Add(this->textBox9);
			this->groupBox6->Controls->Add(this->label18);
			this->groupBox6->Controls->Add(this->textBox8);
			this->groupBox6->Controls->Add(this->label20);
			this->groupBox6->Controls->Add(this->textBox7);
			this->groupBox6->Controls->Add(this->label21);
			this->groupBox6->Location = System::Drawing::Point(211, 46);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(243, 251);
			this->groupBox6->TabIndex = 21;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"HASIL WARNA";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(6, 226);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(121, 13);
			this->label21->TabIndex = 0;
			this->label21->Text = L"Gelang Koefisien Suhu :";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Window;
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(133, 223);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 19;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(6, 107);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(83, 13);
			this->label20->TabIndex = 0;
			this->label20->Text = L" Gelang Ketiga :";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Window;
			this->textBox8->Enabled = false;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(134, 184);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 19;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(6, 68);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(81, 13);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Gelang Kedua :";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::Window;
			this->textBox9->Enabled = false;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(134, 145);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 19;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(7, 148);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(95, 13);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Gelang  Keempat :";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::Window;
			this->textBox10->Enabled = false;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(133, 104);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 19;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(7, 25);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(89, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Gelang Pertama :";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::Window;
			this->textBox11->Enabled = false;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(133, 65);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 19;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(7, 187);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(93, 13);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Gelang Toleransi :";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::Window;
			this->textBox12->Enabled = false;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(134, 22);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 19;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->comboBox1);
			this->groupBox4->Controls->Add(this->comboBox2);
			this->groupBox4->Controls->Add(this->comboBox3);
			this->groupBox4->Controls->Add(this->comboBox4);
			this->groupBox4->Controls->Add(this->comboBox5);
			this->groupBox4->Controls->Add(this->comboBox6);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Location = System::Drawing::Point(6, 46);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(199, 251);
			this->groupBox4->TabIndex = 20;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"PILIH DIGIT";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(6, 226);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(84, 13);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Koefisien Suhu :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(6, 107);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 13);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Digit Ketiga :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(6, 187);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(56, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Toleransi :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(6, 68);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(68, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Digit Kedua :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(6, 148);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(79, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Digit Keempat :";
			// 
			// comboBox6
			// 
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(95, 223);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(95, 21);
			this->comboBox6->TabIndex = 1;
			this->comboBox6->Text = L"Koefisien Suhu";
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(95, 184);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(95, 21);
			this->comboBox5->TabIndex = 1;
			this->comboBox5->Text = L"Toleransi (%)";
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(95, 145);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(95, 21);
			this->comboBox4->TabIndex = 1;
			this->comboBox4->Text = L"Pengali";
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(95, 104);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(95, 21);
			this->comboBox3->TabIndex = 1;
			this->comboBox3->Text = L"Warna 3";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(95, 65);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(95, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->Text = L"Warna 2";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(95, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(95, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"Warna 1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(6, 28);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Digit Pertama :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(6, 22);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(81, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Pilihan Gelang :";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(98, 20);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(92, 17);
			this->radioButton6->TabIndex = 17;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Empat Gelang";
			this->toolTip1->SetToolTip(this->radioButton6, L"Empat Gelang\r\nUntuk Resistor yang memiliki Empat Gelang");
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(199, 20);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(84, 17);
			this->radioButton5->TabIndex = 18;
			this->radioButton5->Text = L"Lima Gelang";
			this->toolTip1->SetToolTip(this->radioButton5, L"Lima Gelang\r\nUntuk Resistor yang memiliki Lima Gelang");
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(293, 20);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(89, 17);
			this->radioButton4->TabIndex = 16;
			this->radioButton4->Text = L"Enam Gelang";
			this->toolTip1->SetToolTip(this->radioButton4, L"Enam Gelang\r\nUntuk Resistor yang memiliki Enam Gelang");
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(460, 20);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(230, 252);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(460, 277);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(79, 17);
			this->checkBox2->TabIndex = 23;
			this->checkBox2->Text = L"View Table";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->groupBox1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(708, 315);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Warna ke Nilai";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->lbKet);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->gBGelTemp);
			this->groupBox1->Controls->Add(this->gBGelPengali);
			this->groupBox1->Controls->Add(this->gBGel2);
			this->groupBox1->Controls->Add(this->gBGelToleransi);
			this->groupBox1->Controls->Add(this->gBGel3);
			this->groupBox1->Controls->Add(this->gBGel1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(696, 306);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"PILIH WARNA";
			// 
			// gBGel1
			// 
			this->gBGel1->Controls->Add(this->lbPutih1);
			this->gBGel1->Controls->Add(this->lbHitam1);
			this->gBGel1->Controls->Add(this->lbMerah1);
			this->gBGel1->Controls->Add(this->lbUngu1);
			this->gBGel1->Controls->Add(this->lbBiru1);
			this->gBGel1->Controls->Add(this->lbKuning1);
			this->gBGel1->Controls->Add(this->lbHijau1);
			this->gBGel1->Controls->Add(this->lbJingga1);
			this->gBGel1->Controls->Add(this->lbAbu1);
			this->gBGel1->Controls->Add(this->lbCokelat1);
			this->gBGel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gBGel1->Location = System::Drawing::Point(6, 46);
			this->gBGel1->Name = L"gBGel1";
			this->gBGel1->Size = System::Drawing::Size(106, 226);
			this->gBGel1->TabIndex = 1;
			this->gBGel1->TabStop = false;
			this->gBGel1->Text = L"Gelang Pertama";
			// 
			// lbCokelat1
			// 
			this->lbCokelat1->BackColor = System::Drawing::Color::Chocolate;
			this->lbCokelat1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbCokelat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCokelat1->ForeColor = System::Drawing::Color::White;
			this->lbCokelat1->Location = System::Drawing::Point(6, 40);
			this->lbCokelat1->Name = L"lbCokelat1";
			this->lbCokelat1->Size = System::Drawing::Size(94, 18);
			this->lbCokelat1->TabIndex = 0;
			this->lbCokelat1->Text = L"COKELAT";
			this->lbCokelat1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbCokelat1, L"Klik untuk memilih warna");
			this->lbCokelat1->Click += gcnew System::EventHandler(this, &Form1::lbCokelat1_Click);
			// 
			// lbAbu1
			// 
			this->lbAbu1->BackColor = System::Drawing::Color::Gray;
			this->lbAbu1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbAbu1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAbu1->ForeColor = System::Drawing::Color::White;
			this->lbAbu1->Location = System::Drawing::Point(6, 180);
			this->lbAbu1->Name = L"lbAbu1";
			this->lbAbu1->Size = System::Drawing::Size(94, 18);
			this->lbAbu1->TabIndex = 0;
			this->lbAbu1->Text = L"ABU-ABU";
			this->lbAbu1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbAbu1, L"Klik untuk memilih warna");
			this->lbAbu1->Click += gcnew System::EventHandler(this, &Form1::lbAbu1_Click);
			// 
			// lbJingga1
			// 
			this->lbJingga1->BackColor = System::Drawing::Color::Orange;
			this->lbJingga1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbJingga1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbJingga1->ForeColor = System::Drawing::Color::Black;
			this->lbJingga1->Location = System::Drawing::Point(6, 80);
			this->lbJingga1->Name = L"lbJingga1";
			this->lbJingga1->Size = System::Drawing::Size(94, 18);
			this->lbJingga1->TabIndex = 0;
			this->lbJingga1->Text = L"JINGGA";
			this->lbJingga1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbJingga1, L"Klik untuk memilih warna");
			this->lbJingga1->Click += gcnew System::EventHandler(this, &Form1::lbJingga1_Click);
			// 
			// lbHijau1
			// 
			this->lbHijau1->BackColor = System::Drawing::Color::Green;
			this->lbHijau1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbHijau1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHijau1->ForeColor = System::Drawing::Color::White;
			this->lbHijau1->Location = System::Drawing::Point(6, 120);
			this->lbHijau1->Name = L"lbHijau1";
			this->lbHijau1->Size = System::Drawing::Size(94, 18);
			this->lbHijau1->TabIndex = 0;
			this->lbHijau1->Text = L"HIJAU";
			this->lbHijau1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbHijau1, L"Klik untuk memilih warna");
			this->lbHijau1->Click += gcnew System::EventHandler(this, &Form1::lbHijau1_Click);
			// 
			// lbKuning1
			// 
			this->lbKuning1->BackColor = System::Drawing::Color::Yellow;
			this->lbKuning1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbKuning1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbKuning1->ForeColor = System::Drawing::Color::Black;
			this->lbKuning1->Location = System::Drawing::Point(6, 100);
			this->lbKuning1->Name = L"lbKuning1";
			this->lbKuning1->Size = System::Drawing::Size(94, 18);
			this->lbKuning1->TabIndex = 0;
			this->lbKuning1->Text = L"KUNING";
			this->lbKuning1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbKuning1, L"Klik untuk memilih warna");
			this->lbKuning1->Click += gcnew System::EventHandler(this, &Form1::lbKuning1_Click);
			// 
			// lbBiru1
			// 
			this->lbBiru1->BackColor = System::Drawing::Color::Blue;
			this->lbBiru1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbBiru1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBiru1->ForeColor = System::Drawing::Color::White;
			this->lbBiru1->Location = System::Drawing::Point(6, 140);
			this->lbBiru1->Name = L"lbBiru1";
			this->lbBiru1->Size = System::Drawing::Size(94, 18);
			this->lbBiru1->TabIndex = 0;
			this->lbBiru1->Text = L"BIRU";
			this->lbBiru1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbBiru1, L"Klik untuk memilih warna");
			this->lbBiru1->Click += gcnew System::EventHandler(this, &Form1::lbBiru1_Click);
			// 
			// lbUngu1
			// 
			this->lbUngu1->BackColor = System::Drawing::Color::Purple;
			this->lbUngu1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbUngu1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUngu1->ForeColor = System::Drawing::Color::White;
			this->lbUngu1->Location = System::Drawing::Point(6, 160);
			this->lbUngu1->Name = L"lbUngu1";
			this->lbUngu1->Size = System::Drawing::Size(94, 18);
			this->lbUngu1->TabIndex = 0;
			this->lbUngu1->Text = L"UNGU";
			this->lbUngu1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbUngu1, L"Klik untuk memilih warna");
			this->lbUngu1->Click += gcnew System::EventHandler(this, &Form1::lbUngu1_Click);
			// 
			// lbMerah1
			// 
			this->lbMerah1->BackColor = System::Drawing::Color::Red;
			this->lbMerah1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbMerah1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMerah1->ForeColor = System::Drawing::Color::White;
			this->lbMerah1->Location = System::Drawing::Point(6, 60);
			this->lbMerah1->Name = L"lbMerah1";
			this->lbMerah1->Size = System::Drawing::Size(94, 18);
			this->lbMerah1->TabIndex = 0;
			this->lbMerah1->Text = L"MERAH";
			this->lbMerah1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbMerah1, L"Klik untuk memilih warna");
			this->lbMerah1->Click += gcnew System::EventHandler(this, &Form1::lbMerah1_Click);
			// 
			// lbHitam1
			// 
			this->lbHitam1->BackColor = System::Drawing::Color::Black;
			this->lbHitam1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbHitam1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHitam1->ForeColor = System::Drawing::Color::White;
			this->lbHitam1->Location = System::Drawing::Point(6, 20);
			this->lbHitam1->Name = L"lbHitam1";
			this->lbHitam1->Size = System::Drawing::Size(94, 18);
			this->lbHitam1->TabIndex = 0;
			this->lbHitam1->Text = L"HITAM";
			this->lbHitam1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbHitam1, L"Klik untuk memilih warna");
			this->lbHitam1->Click += gcnew System::EventHandler(this, &Form1::lbHitam1_Click);
			// 
			// lbPutih1
			// 
			this->lbPutih1->BackColor = System::Drawing::Color::White;
			this->lbPutih1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbPutih1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPutih1->ForeColor = System::Drawing::Color::Black;
			this->lbPutih1->Location = System::Drawing::Point(6, 200);
			this->lbPutih1->Name = L"lbPutih1";
			this->lbPutih1->Size = System::Drawing::Size(94, 18);
			this->lbPutih1->TabIndex = 0;
			this->lbPutih1->Text = L"PUTIH";
			this->lbPutih1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbPutih1, L"Klik untuk memilih warna");
			this->lbPutih1->Click += gcnew System::EventHandler(this, &Form1::lbPutih1_Click);
			// 
			// gBGel3
			// 
			this->gBGel3->Controls->Add(this->lbPutih3);
			this->gBGel3->Controls->Add(this->lbHitam3);
			this->gBGel3->Controls->Add(this->lbMerah3);
			this->gBGel3->Controls->Add(this->lbUngu3);
			this->gBGel3->Controls->Add(this->lbBiru3);
			this->gBGel3->Controls->Add(this->lbKuning3);
			this->gBGel3->Controls->Add(this->lbHijau3);
			this->gBGel3->Controls->Add(this->lbJingga3);
			this->gBGel3->Controls->Add(this->lbAbu3);
			this->gBGel3->Controls->Add(this->lbCokelat3);
			this->gBGel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gBGel3->Location = System::Drawing::Point(239, 46);
			this->gBGel3->Name = L"gBGel3";
			this->gBGel3->Size = System::Drawing::Size(106, 226);
			this->gBGel3->TabIndex = 1;
			this->gBGel3->TabStop = false;
			this->gBGel3->Text = L"Gelang Ketiga";
			// 
			// lbCokelat3
			// 
			this->lbCokelat3->BackColor = System::Drawing::Color::Chocolate;
			this->lbCokelat3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbCokelat3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCokelat3->ForeColor = System::Drawing::Color::White;
			this->lbCokelat3->Location = System::Drawing::Point(6, 40);
			this->lbCokelat3->Name = L"lbCokelat3";
			this->lbCokelat3->Size = System::Drawing::Size(94, 18);
			this->lbCokelat3->TabIndex = 0;
			this->lbCokelat3->Text = L"COKELAT";
			this->lbCokelat3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbCokelat3, L"Klik untuk memilih warna");
			this->lbCokelat3->Click += gcnew System::EventHandler(this, &Form1::lbCokelat3_Click);
			// 
			// lbAbu3
			// 
			this->lbAbu3->BackColor = System::Drawing::Color::Gray;
			this->lbAbu3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbAbu3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAbu3->ForeColor = System::Drawing::Color::White;
			this->lbAbu3->Location = System::Drawing::Point(6, 180);
			this->lbAbu3->Name = L"lbAbu3";
			this->lbAbu3->Size = System::Drawing::Size(94, 18);
			this->lbAbu3->TabIndex = 0;
			this->lbAbu3->Text = L"ABU-ABU";
			this->lbAbu3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbAbu3, L"Klik untuk memilih warna");
			this->lbAbu3->Click += gcnew System::EventHandler(this, &Form1::lbAbu3_Click);
			// 
			// lbJingga3
			// 
			this->lbJingga3->BackColor = System::Drawing::Color::Orange;
			this->lbJingga3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbJingga3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbJingga3->ForeColor = System::Drawing::Color::Black;
			this->lbJingga3->Location = System::Drawing::Point(6, 80);
			this->lbJingga3->Name = L"lbJingga3";
			this->lbJingga3->Size = System::Drawing::Size(94, 18);
			this->lbJingga3->TabIndex = 0;
			this->lbJingga3->Text = L"JINGGA";
			this->lbJingga3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbJingga3, L"Klik untuk memilih warna");
			this->lbJingga3->Click += gcnew System::EventHandler(this, &Form1::lbJingga3_Click);
			// 
			// lbHijau3
			// 
			this->lbHijau3->BackColor = System::Drawing::Color::Green;
			this->lbHijau3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbHijau3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHijau3->ForeColor = System::Drawing::Color::White;
			this->lbHijau3->Location = System::Drawing::Point(6, 120);
			this->lbHijau3->Name = L"lbHijau3";
			this->lbHijau3->Size = System::Drawing::Size(94, 18);
			this->lbHijau3->TabIndex = 0;
			this->lbHijau3->Text = L"HIJAU";
			this->lbHijau3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbHijau3, L"Klik untuk memilih warna");
			this->lbHijau3->Click += gcnew System::EventHandler(this, &Form1::lbHijau3_Click);
			// 
			// lbKuning3
			// 
			this->lbKuning3->BackColor = System::Drawing::Color::Yellow;
			this->lbKuning3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbKuning3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbKuning3->ForeColor = System::Drawing::Color::Black;
			this->lbKuning3->Location = System::Drawing::Point(6, 100);
			this->lbKuning3->Name = L"lbKuning3";
			this->lbKuning3->Size = System::Drawing::Size(94, 18);
			this->lbKuning3->TabIndex = 0;
			this->lbKuning3->Text = L"KUNING";
			this->lbKuning3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbKuning3, L"Klik untuk memilih warna");
			this->lbKuning3->Click += gcnew System::EventHandler(this, &Form1::lbKuning3_Click);
			// 
			// lbBiru3
			// 
			this->lbBiru3->BackColor = System::Drawing::Color::Blue;
			this->lbBiru3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbBiru3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBiru3->ForeColor = System::Drawing::Color::White;
			this->lbBiru3->Location = System::Drawing::Point(6, 140);
			this->lbBiru3->Name = L"lbBiru3";
			this->lbBiru3->Size = System::Drawing::Size(94, 18);
			this->lbBiru3->TabIndex = 0;
			this->lbBiru3->Text = L"BIRU";
			this->lbBiru3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbBiru3, L"Klik untuk memilih warna");
			this->lbBiru3->Click += gcnew System::EventHandler(this, &Form1::lbBiru3_Click);
			// 
			// lbUngu3
			// 
			this->lbUngu3->BackColor = System::Drawing::Color::Purple;
			this->lbUngu3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbUngu3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUngu3->ForeColor = System::Drawing::Color::White;
			this->lbUngu3->Location = System::Drawing::Point(6, 160);
			this->lbUngu3->Name = L"lbUngu3";
			this->lbUngu3->Size = System::Drawing::Size(94, 18);
			this->lbUngu3->TabIndex = 0;
			this->lbUngu3->Text = L"UNGU";
			this->lbUngu3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbUngu3, L"Klik untuk memilih warna");
			this->lbUngu3->Click += gcnew System::EventHandler(this, &Form1::lbUngu3_Click);
			// 
			// lbMerah3
			// 
			this->lbMerah3->BackColor = System::Drawing::Color::Red;
			this->lbMerah3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbMerah3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMerah3->ForeColor = System::Drawing::Color::White;
			this->lbMerah3->Location = System::Drawing::Point(6, 60);
			this->lbMerah3->Name = L"lbMerah3";
			this->lbMerah3->Size = System::Drawing::Size(94, 18);
			this->lbMerah3->TabIndex = 0;
			this->lbMerah3->Text = L"MERAH";
			this->lbMerah3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbMerah3, L"Klik untuk memilih warna");
			this->lbMerah3->Click += gcnew System::EventHandler(this, &Form1::lbMerah3_Click);
			// 
			// lbHitam3
			// 
			this->lbHitam3->BackColor = System::Drawing::Color::Black;
			this->lbHitam3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbHitam3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHitam3->ForeColor = System::Drawing::Color::White;
			this->lbHitam3->Location = System::Drawing::Point(6, 20);
			this->lbHitam3->Name = L"lbHitam3";
			this->lbHitam3->Size = System::Drawing::Size(94, 18);
			this->lbHitam3->TabIndex = 0;
			this->lbHitam3->Text = L"HITAM";
			this->lbHitam3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbHitam3, L"Klik untuk memilih warna");
			this->lbHitam3->Click += gcnew System::EventHandler(this, &Form1::lbHitam3_Click);
			// 
			// lbPutih3
			// 
			this->lbPutih3->BackColor = System::Drawing::Color::White;
			this->lbPutih3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbPutih3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPutih3->ForeColor = System::Drawing::Color::Black;
			this->lbPutih3->Location = System::Drawing::Point(6, 200);
			this->lbPutih3->Name = L"lbPutih3";
			this->lbPutih3->Size = System::Drawing::Size(94, 18);
			this->lbPutih3->TabIndex = 0;
			this->lbPutih3->Text = L"PUTIH";
			this->lbPutih3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbPutih3, L"Klik untuk memilih warna");
			this->lbPutih3->Click += gcnew System::EventHandler(this, &Form1::lbPutih3_Click);
			// 
			// gBGelToleransi
			// 
			this->gBGelToleransi->Controls->Add(this->lbEmasToleransi);
			this->gBGelToleransi->Controls->Add(this->lbMerahToleransi);
			this->gBGelToleransi->Controls->Add(this->lbUnguToleransi);
			this->gBGelToleransi->Controls->Add(this->lbBiruToleransi);
			this->gBGelToleransi->Controls->Add(this->lbHijauToleransi);
			this->gBGelToleransi->Controls->Add(this->lbAbuToleransi);
			this->gBGelToleransi->Controls->Add(this->lbCokelatToleransi);
			this->gBGelToleransi->Controls->Add(this->lbKosongToleransi);
			this->gBGelToleransi->Controls->Add(this->lbSilverToleransi);
			this->gBGelToleransi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gBGelToleransi->Location = System::Drawing::Point(469, 46);
			this->gBGelToleransi->Name = L"gBGelToleransi";
			this->gBGelToleransi->Size = System::Drawing::Size(106, 226);
			this->gBGelToleransi->TabIndex = 1;
			this->gBGelToleransi->TabStop = false;
			this->gBGelToleransi->Text = L"Gelang Toleransi";
			// 
			// lbSilverToleransi
			// 
			this->lbSilverToleransi->BackColor = System::Drawing::Color::Silver;
			this->lbSilverToleransi->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbSilverToleransi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbSilverToleransi->ForeColor = System::Drawing::Color::Black;
			this->lbSilverToleransi->Location = System::Drawing::Point(6, 160);
			this->lbSilverToleransi->Name = L"lbSilverToleransi";
			this->lbSilverToleransi->Size = System::Drawing::Size(94, 18);
			this->lbSilverToleransi->TabIndex = 0;
			this->lbSilverToleransi->Text = L"SILVER";
			this->lbSilverToleransi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbSilverToleransi, L"Klik untuk memilih warna");
			this->lbSilverToleransi->Click += gcnew System::EventHandler(this, &Form1::lbSilverToleransi_Click);
			// 
			// lbKosongToleransi
			// 
			this->lbKosongToleransi->BackColor = System::Drawing::Color::Transparent;
			this->lbKosongToleransi->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbKosongToleransi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbKosongToleransi->ForeColor = System::Drawing::Color::Black;
			this->lbKosongToleransi->Location = System::Drawing::Point(6, 180);
			this->lbKosongToleransi->Name = L"lbKosongToleransi";
			this->lbKosongToleransi->Size = System::Drawing::Size(94, 18);
			this->lbKosongToleransi->TabIndex = 0;
			this->lbKosongToleransi->Text = L"KOSONG";
			this->lbKosongToleransi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbKosongToleransi, L"Klik untuk memilih warna");
			this->lbKosongToleransi->Click += gcnew System::EventHandler(this, &Form1::lbKosongToleransi_Click);
			// 
			// lbCokelatToleransi
			// 
			this->lbCokelatToleransi->BackColor = System::Drawing::Color::Chocolate;
			this->lbCokelatToleransi->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbCokelatToleransi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbCokelatToleransi->ForeColor = System::Drawing::Color::White;
			this->lbCokelatToleransi->Location = System::Drawing::Point(6, 20);
			this->lbCokelatToleransi->Name = L"lbCokelatToleransi";
			this->lbCokelatToleransi->Size = System::Drawing::Size(94, 18);
			this->lbCokelatToleransi->TabIndex = 0;
			this->lbCokelatToleransi->Text = L"COKELAT";
			this->lbCokelatToleransi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbCokelatToleransi, L"Klik untuk memilih warna");
			this->lbCokelatToleransi->Click += gcnew System::EventHandler(this, &Form1::lbCokelatToleransi_Click);
			// 
			// lbAbuToleransi
			// 
			this->lbAbuToleransi->BackColor = System::Drawing::Color::Gray;
			this->lbAbuToleransi->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbAbuToleransi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAbuToleransi->ForeColor = System::Drawing::Color::White;
			this->lbAbuToleransi->Location = System::Drawing::Point(6, 120);
			this->lbAbuToleransi->Name = L"lbAbuToleransi";
			this->lbAbuToleransi->Size = System::Drawing::Size(94, 18);
			this->lbAbuToleransi->TabIndex = 0;
			this->lbAbuToleransi->Text = L"ABU-ABU";
			this->lbAbuToleransi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbAbuToleransi, L"Klik untuk memilih warna");
			this->lbAbuToleransi->Click += gcnew System::EventHandler(this, &Form1::lbAbuToleransi_Click);
			// 
			// lbHijauToleransi
			// 
			this->lbHijauToleransi->BackColor = System::Drawing::Color::Green;
			this->lbHijauToleransi->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbHijauToleransi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHijauToleransi->ForeColor = System::Drawing::Color::White;
			this->lbHijauToleransi->Location = System::Drawing::Point(6, 60);
			this->lbHijauToleransi->Name = L"lbHijauToleransi";
			this->lbHijauToleransi->Size = System::Drawing::Size(94, 18);
			this->lbHijauToleransi->TabIndex = 0;
			this->lbHijauToleransi->Text = L"HIJAU";
			this->lbHijauToleransi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbHijauToleransi, L"Klik untuk memilih warna");
			this->lbHijauToleransi->Click += gcnew System::EventHandler(this, &Form1::lbHijauToleransi_Click);
			// 
			// lbBiruToleransi
			// 
			this->lbBiruToleransi->BackColor = System::Drawing::Color::Blue;
			this->lbBiruToleransi->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbBiruToleransi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBiruToleransi->ForeColor = System::Drawing::Color::White;
			this->lbBiruToleransi->Location = System::Drawing::Point(6, 80);
			this->lbBiruToleransi->Name = L"lbBiruToleransi";
			this->lbBiruToleransi->Size = System::Drawing::Size(94, 18);
			this->lbBiruToleransi->TabIndex = 0;
			this->lbBiruToleransi->Text = L"BIRU";
			this->lbBiruToleransi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbBiruToleransi, L"Klik untuk memilih warna");
			this->lbBiruToleransi->Click += gcnew System::EventHandler(this, &Form1::lbBiruToleransi_Click);
			// 
			// lbUnguToleransi
			// 
			this->lbUnguToleransi->BackColor = System::Drawing::Color::Purple;
			this->lbUnguToleransi->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbUnguToleransi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUnguToleransi->ForeColor = System::Drawing::Color::White;
			this->lbUnguToleransi->Location = System::Drawing::Point(6, 100);
			this->lbUnguToleransi->Name = L"lbUnguToleransi";
			this->lbUnguToleransi->Size = System::Drawing::Size(94, 18);
			this->lbUnguToleransi->TabIndex = 0;
			this->lbUnguToleransi->Text = L"UNGU";
			this->lbUnguToleransi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbUnguToleransi, L"Klik untuk memilih warna");
			this->lbUnguToleransi->Click += gcnew System::EventHandler(this, &Form1::lbUnguToleransi_Click);
			// 
			// lbMerahToleransi
			// 
			this->lbMerahToleransi->BackColor = System::Drawing::Color::Red;
			this->lbMerahToleransi->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbMerahToleransi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMerahToleransi->ForeColor = System::Drawing::Color::White;
			this->lbMerahToleransi->Location = System::Drawing::Point(6, 40);
			this->lbMerahToleransi->Name = L"lbMerahToleransi";
			this->lbMerahToleransi->Size = System::Drawing::Size(94, 18);
			this->lbMerahToleransi->TabIndex = 0;
			this->lbMerahToleransi->Text = L"MERAH";
			this->lbMerahToleransi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbMerahToleransi, L"Klik untuk memilih warna");
			this->lbMerahToleransi->Click += gcnew System::EventHandler(this, &Form1::lbMerahToleransi_Click);
			// 
			// lbEmasToleransi
			// 
			this->lbEmasToleransi->BackColor = System::Drawing::Color::Goldenrod;
			this->lbEmasToleransi->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbEmasToleransi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmasToleransi->ForeColor = System::Drawing::Color::Black;
			this->lbEmasToleransi->Location = System::Drawing::Point(6, 140);
			this->lbEmasToleransi->Name = L"lbEmasToleransi";
			this->lbEmasToleransi->Size = System::Drawing::Size(94, 18);
			this->lbEmasToleransi->TabIndex = 0;
			this->lbEmasToleransi->Text = L"EMAS";
			this->lbEmasToleransi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbEmasToleransi, L"Klik untuk memilih warna");
			this->lbEmasToleransi->Click += gcnew System::EventHandler(this, &Form1::lbEmasToleransi_Click);
			// 
			// gBGel2
			// 
			this->gBGel2->Controls->Add(this->lbPutih2);
			this->gBGel2->Controls->Add(this->lbHitam2);
			this->gBGel2->Controls->Add(this->lbMerah2);
			this->gBGel2->Controls->Add(this->lbUngu2);
			this->gBGel2->Controls->Add(this->lbBiru2);
			this->gBGel2->Controls->Add(this->lbKuning2);
			this->gBGel2->Controls->Add(this->lbHijau2);
			this->gBGel2->Controls->Add(this->lbJingga2);
			this->gBGel2->Controls->Add(this->lbAbu2);
			this->gBGel2->Controls->Add(this->lbCokelat2);
			this->gBGel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gBGel2->Location = System::Drawing::Point(123, 46);
			this->gBGel2->Name = L"gBGel2";
			this->gBGel2->Size = System::Drawing::Size(106, 226);
			this->gBGel2->TabIndex = 1;
			this->gBGel2->TabStop = false;
			this->gBGel2->Text = L"Gelang Kedua";
			// 
			// lbCokelat2
			// 
			this->lbCokelat2->BackColor = System::Drawing::Color::Chocolate;
			this->lbCokelat2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbCokelat2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCokelat2->ForeColor = System::Drawing::Color::White;
			this->lbCokelat2->Location = System::Drawing::Point(6, 40);
			this->lbCokelat2->Name = L"lbCokelat2";
			this->lbCokelat2->Size = System::Drawing::Size(94, 18);
			this->lbCokelat2->TabIndex = 0;
			this->lbCokelat2->Text = L"COKELAT";
			this->lbCokelat2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbCokelat2, L"Klik untuk memilih warna");
			this->lbCokelat2->Click += gcnew System::EventHandler(this, &Form1::lbCokelat2_Click);
			// 
			// lbAbu2
			// 
			this->lbAbu2->BackColor = System::Drawing::Color::Gray;
			this->lbAbu2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbAbu2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAbu2->ForeColor = System::Drawing::Color::White;
			this->lbAbu2->Location = System::Drawing::Point(6, 180);
			this->lbAbu2->Name = L"lbAbu2";
			this->lbAbu2->Size = System::Drawing::Size(94, 18);
			this->lbAbu2->TabIndex = 0;
			this->lbAbu2->Text = L"ABU-ABU";
			this->lbAbu2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbAbu2, L"Klik untuk memilih warna");
			this->lbAbu2->Click += gcnew System::EventHandler(this, &Form1::lbAbu2_Click);
			// 
			// lbJingga2
			// 
			this->lbJingga2->BackColor = System::Drawing::Color::Orange;
			this->lbJingga2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbJingga2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbJingga2->ForeColor = System::Drawing::Color::Black;
			this->lbJingga2->Location = System::Drawing::Point(6, 80);
			this->lbJingga2->Name = L"lbJingga2";
			this->lbJingga2->Size = System::Drawing::Size(94, 18);
			this->lbJingga2->TabIndex = 0;
			this->lbJingga2->Text = L"JINGGA";
			this->lbJingga2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbJingga2, L"Klik untuk memilih warna");
			this->lbJingga2->Click += gcnew System::EventHandler(this, &Form1::lbJingga2_Click);
			// 
			// lbHijau2
			// 
			this->lbHijau2->BackColor = System::Drawing::Color::Green;
			this->lbHijau2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbHijau2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHijau2->ForeColor = System::Drawing::Color::White;
			this->lbHijau2->Location = System::Drawing::Point(6, 120);
			this->lbHijau2->Name = L"lbHijau2";
			this->lbHijau2->Size = System::Drawing::Size(94, 18);
			this->lbHijau2->TabIndex = 0;
			this->lbHijau2->Text = L"HIJAU";
			this->lbHijau2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbHijau2, L"Klik untuk memilih warna");
			this->lbHijau2->Click += gcnew System::EventHandler(this, &Form1::lbHijau2_Click);
			// 
			// lbKuning2
			// 
			this->lbKuning2->BackColor = System::Drawing::Color::Yellow;
			this->lbKuning2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbKuning2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbKuning2->ForeColor = System::Drawing::Color::Black;
			this->lbKuning2->Location = System::Drawing::Point(6, 100);
			this->lbKuning2->Name = L"lbKuning2";
			this->lbKuning2->Size = System::Drawing::Size(94, 18);
			this->lbKuning2->TabIndex = 0;
			this->lbKuning2->Text = L"KUNING";
			this->lbKuning2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbKuning2, L"Klik untuk memilih warna");
			this->lbKuning2->Click += gcnew System::EventHandler(this, &Form1::lbKuning2_Click);
			// 
			// lbBiru2
			// 
			this->lbBiru2->BackColor = System::Drawing::Color::Blue;
			this->lbBiru2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbBiru2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBiru2->ForeColor = System::Drawing::Color::White;
			this->lbBiru2->Location = System::Drawing::Point(6, 140);
			this->lbBiru2->Name = L"lbBiru2";
			this->lbBiru2->Size = System::Drawing::Size(94, 18);
			this->lbBiru2->TabIndex = 0;
			this->lbBiru2->Text = L"BIRU";
			this->lbBiru2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbBiru2, L"Klik untuk memilih warna");
			this->lbBiru2->Click += gcnew System::EventHandler(this, &Form1::lbBiru2_Click);
			// 
			// lbUngu2
			// 
			this->lbUngu2->BackColor = System::Drawing::Color::Purple;
			this->lbUngu2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbUngu2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUngu2->ForeColor = System::Drawing::Color::White;
			this->lbUngu2->Location = System::Drawing::Point(6, 160);
			this->lbUngu2->Name = L"lbUngu2";
			this->lbUngu2->Size = System::Drawing::Size(94, 18);
			this->lbUngu2->TabIndex = 0;
			this->lbUngu2->Text = L"UNGU";
			this->lbUngu2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbUngu2, L"Klik untuk memilih warna");
			this->lbUngu2->Click += gcnew System::EventHandler(this, &Form1::lbUngu2_Click);
			// 
			// lbMerah2
			// 
			this->lbMerah2->BackColor = System::Drawing::Color::Red;
			this->lbMerah2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbMerah2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMerah2->ForeColor = System::Drawing::Color::White;
			this->lbMerah2->Location = System::Drawing::Point(6, 60);
			this->lbMerah2->Name = L"lbMerah2";
			this->lbMerah2->Size = System::Drawing::Size(94, 18);
			this->lbMerah2->TabIndex = 0;
			this->lbMerah2->Text = L"MERAH";
			this->lbMerah2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbMerah2, L"Klik untuk memilih warna");
			this->lbMerah2->Click += gcnew System::EventHandler(this, &Form1::lbMerah2_Click);
			// 
			// lbHitam2
			// 
			this->lbHitam2->BackColor = System::Drawing::Color::Black;
			this->lbHitam2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbHitam2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHitam2->ForeColor = System::Drawing::Color::White;
			this->lbHitam2->Location = System::Drawing::Point(6, 20);
			this->lbHitam2->Name = L"lbHitam2";
			this->lbHitam2->Size = System::Drawing::Size(94, 18);
			this->lbHitam2->TabIndex = 0;
			this->lbHitam2->Text = L"HITAM";
			this->lbHitam2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbHitam2, L"Klik untuk memilih warna");
			this->lbHitam2->Click += gcnew System::EventHandler(this, &Form1::lbHitam2_Click);
			// 
			// lbPutih2
			// 
			this->lbPutih2->BackColor = System::Drawing::Color::White;
			this->lbPutih2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbPutih2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPutih2->ForeColor = System::Drawing::Color::Black;
			this->lbPutih2->Location = System::Drawing::Point(6, 200);
			this->lbPutih2->Name = L"lbPutih2";
			this->lbPutih2->Size = System::Drawing::Size(94, 18);
			this->lbPutih2->TabIndex = 0;
			this->lbPutih2->Text = L"PUTIH";
			this->lbPutih2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbPutih2, L"Klik untuk memilih warna");
			this->lbPutih2->Click += gcnew System::EventHandler(this, &Form1::lbPutih2_Click);
			// 
			// gBGelPengali
			// 
			this->gBGelPengali->Controls->Add(this->lbEmasPengali);
			this->gBGelPengali->Controls->Add(this->lbHitamPengali);
			this->gBGelPengali->Controls->Add(this->lbMerahPengali);
			this->gBGelPengali->Controls->Add(this->lbUnguPengali);
			this->gBGelPengali->Controls->Add(this->lbBiruPengali);
			this->gBGelPengali->Controls->Add(this->lbKuningPengali);
			this->gBGelPengali->Controls->Add(this->lbHijauPengali);
			this->gBGelPengali->Controls->Add(this->lbJinggaPengali);
			this->gBGelPengali->Controls->Add(this->lbSilverPengali);
			this->gBGelPengali->Controls->Add(this->lbCokelatPengali);
			this->gBGelPengali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gBGelPengali->Location = System::Drawing::Point(353, 46);
			this->gBGelPengali->Name = L"gBGelPengali";
			this->gBGelPengali->Size = System::Drawing::Size(106, 226);
			this->gBGelPengali->TabIndex = 1;
			this->gBGelPengali->TabStop = false;
			this->gBGelPengali->Text = L"Gelang Pengali";
			// 
			// lbCokelatPengali
			// 
			this->lbCokelatPengali->BackColor = System::Drawing::Color::Chocolate;
			this->lbCokelatPengali->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbCokelatPengali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCokelatPengali->ForeColor = System::Drawing::Color::White;
			this->lbCokelatPengali->Location = System::Drawing::Point(6, 40);
			this->lbCokelatPengali->Name = L"lbCokelatPengali";
			this->lbCokelatPengali->Size = System::Drawing::Size(94, 18);
			this->lbCokelatPengali->TabIndex = 0;
			this->lbCokelatPengali->Text = L"COKELAT";
			this->lbCokelatPengali->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbCokelatPengali, L"Klik untuk memilih warna");
			this->lbCokelatPengali->Click += gcnew System::EventHandler(this, &Form1::lbCokelatPengali_Click);
			// 
			// lbSilverPengali
			// 
			this->lbSilverPengali->BackColor = System::Drawing::Color::Silver;
			this->lbSilverPengali->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbSilverPengali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSilverPengali->ForeColor = System::Drawing::Color::Black;
			this->lbSilverPengali->Location = System::Drawing::Point(6, 200);
			this->lbSilverPengali->Name = L"lbSilverPengali";
			this->lbSilverPengali->Size = System::Drawing::Size(94, 18);
			this->lbSilverPengali->TabIndex = 0;
			this->lbSilverPengali->Text = L"SILVER";
			this->lbSilverPengali->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbSilverPengali, L"Klik untuk memilih warna");
			this->lbSilverPengali->Click += gcnew System::EventHandler(this, &Form1::lbSilverPengali_Click);
			// 
			// lbJinggaPengali
			// 
			this->lbJinggaPengali->BackColor = System::Drawing::Color::Orange;
			this->lbJinggaPengali->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbJinggaPengali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbJinggaPengali->ForeColor = System::Drawing::Color::Black;
			this->lbJinggaPengali->Location = System::Drawing::Point(6, 80);
			this->lbJinggaPengali->Name = L"lbJinggaPengali";
			this->lbJinggaPengali->Size = System::Drawing::Size(94, 18);
			this->lbJinggaPengali->TabIndex = 0;
			this->lbJinggaPengali->Text = L"JINGGA";
			this->lbJinggaPengali->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbJinggaPengali, L"Klik untuk memilih warna");
			this->lbJinggaPengali->Click += gcnew System::EventHandler(this, &Form1::lbJinggaPengali_Click);
			// 
			// lbHijauPengali
			// 
			this->lbHijauPengali->BackColor = System::Drawing::Color::Green;
			this->lbHijauPengali->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbHijauPengali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHijauPengali->ForeColor = System::Drawing::Color::White;
			this->lbHijauPengali->Location = System::Drawing::Point(6, 120);
			this->lbHijauPengali->Name = L"lbHijauPengali";
			this->lbHijauPengali->Size = System::Drawing::Size(94, 18);
			this->lbHijauPengali->TabIndex = 0;
			this->lbHijauPengali->Text = L"HIJAU";
			this->lbHijauPengali->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbHijauPengali, L"Klik untuk memilih warna");
			this->lbHijauPengali->Click += gcnew System::EventHandler(this, &Form1::lbHijauPengali_Click);
			// 
			// lbKuningPengali
			// 
			this->lbKuningPengali->BackColor = System::Drawing::Color::Yellow;
			this->lbKuningPengali->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbKuningPengali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbKuningPengali->ForeColor = System::Drawing::Color::Black;
			this->lbKuningPengali->Location = System::Drawing::Point(6, 100);
			this->lbKuningPengali->Name = L"lbKuningPengali";
			this->lbKuningPengali->Size = System::Drawing::Size(94, 18);
			this->lbKuningPengali->TabIndex = 0;
			this->lbKuningPengali->Text = L"KUNING";
			this->lbKuningPengali->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbKuningPengali, L"Klik untuk memilih warna");
			this->lbKuningPengali->Click += gcnew System::EventHandler(this, &Form1::lbKuningPengali_Click);
			// 
			// lbBiruPengali
			// 
			this->lbBiruPengali->BackColor = System::Drawing::Color::Blue;
			this->lbBiruPengali->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbBiruPengali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBiruPengali->ForeColor = System::Drawing::Color::White;
			this->lbBiruPengali->Location = System::Drawing::Point(6, 140);
			this->lbBiruPengali->Name = L"lbBiruPengali";
			this->lbBiruPengali->Size = System::Drawing::Size(94, 18);
			this->lbBiruPengali->TabIndex = 0;
			this->lbBiruPengali->Text = L"BIRU";
			this->lbBiruPengali->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbBiruPengali, L"Klik untuk memilih warna");
			this->lbBiruPengali->Click += gcnew System::EventHandler(this, &Form1::lbBiruPengali_Click);
			// 
			// lbUnguPengali
			// 
			this->lbUnguPengali->BackColor = System::Drawing::Color::Purple;
			this->lbUnguPengali->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbUnguPengali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUnguPengali->ForeColor = System::Drawing::Color::White;
			this->lbUnguPengali->Location = System::Drawing::Point(6, 160);
			this->lbUnguPengali->Name = L"lbUnguPengali";
			this->lbUnguPengali->Size = System::Drawing::Size(94, 18);
			this->lbUnguPengali->TabIndex = 0;
			this->lbUnguPengali->Text = L"UNGU";
			this->lbUnguPengali->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbUnguPengali, L"Klik untuk memilih warna");
			this->lbUnguPengali->Click += gcnew System::EventHandler(this, &Form1::lbUnguPengali_Click);
			// 
			// lbMerahPengali
			// 
			this->lbMerahPengali->BackColor = System::Drawing::Color::Red;
			this->lbMerahPengali->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbMerahPengali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMerahPengali->ForeColor = System::Drawing::Color::White;
			this->lbMerahPengali->Location = System::Drawing::Point(6, 60);
			this->lbMerahPengali->Name = L"lbMerahPengali";
			this->lbMerahPengali->Size = System::Drawing::Size(94, 18);
			this->lbMerahPengali->TabIndex = 0;
			this->lbMerahPengali->Text = L"MERAH";
			this->lbMerahPengali->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbMerahPengali, L"Klik untuk memilih warna");
			this->lbMerahPengali->Click += gcnew System::EventHandler(this, &Form1::lbMerahPengali_Click);
			// 
			// lbHitamPengali
			// 
			this->lbHitamPengali->BackColor = System::Drawing::Color::Black;
			this->lbHitamPengali->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbHitamPengali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHitamPengali->ForeColor = System::Drawing::Color::White;
			this->lbHitamPengali->Location = System::Drawing::Point(6, 20);
			this->lbHitamPengali->Name = L"lbHitamPengali";
			this->lbHitamPengali->Size = System::Drawing::Size(94, 18);
			this->lbHitamPengali->TabIndex = 0;
			this->lbHitamPengali->Text = L"HITAM";
			this->lbHitamPengali->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbHitamPengali, L"Klik untuk memilih warna");
			this->lbHitamPengali->Click += gcnew System::EventHandler(this, &Form1::lbHitamPengali_Click);
			// 
			// lbEmasPengali
			// 
			this->lbEmasPengali->BackColor = System::Drawing::Color::Goldenrod;
			this->lbEmasPengali->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbEmasPengali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmasPengali->ForeColor = System::Drawing::Color::Black;
			this->lbEmasPengali->Location = System::Drawing::Point(6, 180);
			this->lbEmasPengali->Name = L"lbEmasPengali";
			this->lbEmasPengali->Size = System::Drawing::Size(94, 18);
			this->lbEmasPengali->TabIndex = 0;
			this->lbEmasPengali->Text = L"EMAS";
			this->lbEmasPengali->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbEmasPengali, L"Klik untuk memilih warna");
			this->lbEmasPengali->Click += gcnew System::EventHandler(this, &Form1::lbEmasPengali_Click);
			// 
			// gBGelTemp
			// 
			this->gBGelTemp->Controls->Add(this->lbMerahTemp);
			this->gBGelTemp->Controls->Add(this->lbKuningTemp);
			this->gBGelTemp->Controls->Add(this->lbJinggaTemp);
			this->gBGelTemp->Controls->Add(this->lbCokelatTemp);
			this->gBGelTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gBGelTemp->Location = System::Drawing::Point(584, 46);
			this->gBGelTemp->Name = L"gBGelTemp";
			this->gBGelTemp->Size = System::Drawing::Size(106, 226);
			this->gBGelTemp->TabIndex = 1;
			this->gBGelTemp->TabStop = false;
			this->gBGelTemp->Text = L"Gelang Temp";
			// 
			// lbCokelatTemp
			// 
			this->lbCokelatTemp->BackColor = System::Drawing::Color::Chocolate;
			this->lbCokelatTemp->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbCokelatTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCokelatTemp->ForeColor = System::Drawing::Color::White;
			this->lbCokelatTemp->Location = System::Drawing::Point(6, 20);
			this->lbCokelatTemp->Name = L"lbCokelatTemp";
			this->lbCokelatTemp->Size = System::Drawing::Size(94, 18);
			this->lbCokelatTemp->TabIndex = 0;
			this->lbCokelatTemp->Text = L"COKELAT";
			this->lbCokelatTemp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbCokelatTemp, L"Klik untuk memilih warna");
			this->lbCokelatTemp->Click += gcnew System::EventHandler(this, &Form1::lbCokelatTemp_Click);
			// 
			// lbJinggaTemp
			// 
			this->lbJinggaTemp->BackColor = System::Drawing::Color::Orange;
			this->lbJinggaTemp->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbJinggaTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbJinggaTemp->ForeColor = System::Drawing::Color::Black;
			this->lbJinggaTemp->Location = System::Drawing::Point(6, 60);
			this->lbJinggaTemp->Name = L"lbJinggaTemp";
			this->lbJinggaTemp->Size = System::Drawing::Size(94, 18);
			this->lbJinggaTemp->TabIndex = 0;
			this->lbJinggaTemp->Text = L"JINGGA";
			this->lbJinggaTemp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbJinggaTemp, L"Klik untuk memilih warna");
			this->lbJinggaTemp->Click += gcnew System::EventHandler(this, &Form1::lbJinggaTemp_Click);
			// 
			// lbKuningTemp
			// 
			this->lbKuningTemp->BackColor = System::Drawing::Color::Yellow;
			this->lbKuningTemp->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbKuningTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbKuningTemp->ForeColor = System::Drawing::Color::Black;
			this->lbKuningTemp->Location = System::Drawing::Point(6, 80);
			this->lbKuningTemp->Name = L"lbKuningTemp";
			this->lbKuningTemp->Size = System::Drawing::Size(94, 18);
			this->lbKuningTemp->TabIndex = 0;
			this->lbKuningTemp->Text = L"KUNING";
			this->lbKuningTemp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbKuningTemp, L"Klik untuk memilih warna");
			this->lbKuningTemp->Click += gcnew System::EventHandler(this, &Form1::lbKuningTemp_Click);
			// 
			// lbMerahTemp
			// 
			this->lbMerahTemp->BackColor = System::Drawing::Color::Red;
			this->lbMerahTemp->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbMerahTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMerahTemp->ForeColor = System::Drawing::Color::White;
			this->lbMerahTemp->Location = System::Drawing::Point(6, 40);
			this->lbMerahTemp->Name = L"lbMerahTemp";
			this->lbMerahTemp->Size = System::Drawing::Size(94, 18);
			this->lbMerahTemp->TabIndex = 0;
			this->lbMerahTemp->Text = L"MERAH";
			this->lbMerahTemp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lbMerahTemp, L"Klik untuk memilih warna");
			this->lbMerahTemp->Click += gcnew System::EventHandler(this, &Form1::lbMerahTemp_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pilihan Gelang :";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(100, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(92, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Empat Gelang";
			this->toolTip1->SetToolTip(this->radioButton1, L"Empat Gelang\r\nUntuk Resistor yang memiliki Empat Gelang");
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(201, 20);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(84, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->Text = L"Lima Gelang";
			this->toolTip1->SetToolTip(this->radioButton2, L"Lima Gelang\r\nUntuk Resistor yang memiliki Lima Gelang");
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(295, 20);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(89, 17);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->Text = L"Enam Gelang";
			this->toolTip1->SetToolTip(this->radioButton3, L"Enam Gelang\r\nUntuk Resistor yang memiliki Enam Gelang");
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(6, 277);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(106, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Warna 1";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(123, 277);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(106, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"Warna 2";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Window;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(239, 277);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(106, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"Warna 3";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(353, 277);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(106, 20);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"Pengali";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Window;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(469, 277);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(106, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"Toleransi";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lbKet
			// 
			this->lbKet->AutoSize = true;
			this->lbKet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbKet->Location = System::Drawing::Point(568, 22);
			this->lbKet->Name = L"lbKet";
			this->lbKet->Size = System::Drawing::Size(104, 13);
			this->lbKet->TabIndex = 7;
			this->lbKet->Text = L"Pilih Gelang Resistor";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Window;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(584, 277);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(106, 20);
			this->textBox6->TabIndex = 4;
			this->textBox6->Text = L"Temperatur";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(559, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(11, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"*";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->btnHitung);
			this->groupBox2->Controls->Add(this->tBResMin);
			this->groupBox2->Controls->Add(this->tBNilaiToleransi);
			this->groupBox2->Controls->Add(this->tBResMax);
			this->groupBox2->Controls->Add(this->tBTemp);
			this->groupBox2->Controls->Add(this->tBNilaiResistansi);
			this->groupBox2->Controls->Add(this->rBMOhm);
			this->groupBox2->Controls->Add(this->rBKOhm);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->rBOhm);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(3, 350);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(369, 118);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"HASIL";
			// 
			// rBOhm
			// 
			this->rBOhm->AutoSize = true;
			this->rBOhm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rBOhm->Location = System::Drawing::Point(57, 17);
			this->rBOhm->Name = L"rBOhm";
			this->rBOhm->Size = System::Drawing::Size(47, 17);
			this->rBOhm->TabIndex = 3;
			this->rBOhm->TabStop = true;
			this->rBOhm->Text = L"Ohm";
			this->rBOhm->UseVisualStyleBackColor = true;
			this->rBOhm->CheckedChanged += gcnew System::EventHandler(this, &Form1::rBOhm_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(5, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Satuan :";
			// 
			// rBKOhm
			// 
			this->rBKOhm->AutoSize = true;
			this->rBKOhm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rBKOhm->Location = System::Drawing::Point(114, 17);
			this->rBKOhm->Name = L"rBKOhm";
			this->rBKOhm->Size = System::Drawing::Size(67, 17);
			this->rBKOhm->TabIndex = 3;
			this->rBKOhm->Text = L"Kilo Ohm";
			this->rBKOhm->UseVisualStyleBackColor = true;
			this->rBKOhm->CheckedChanged += gcnew System::EventHandler(this, &Form1::rBKOhm_CheckedChanged);
			// 
			// rBMOhm
			// 
			this->rBMOhm->AutoSize = true;
			this->rBMOhm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rBMOhm->Location = System::Drawing::Point(193, 17);
			this->rBMOhm->Name = L"rBMOhm";
			this->rBMOhm->Size = System::Drawing::Size(77, 17);
			this->rBMOhm->TabIndex = 3;
			this->rBMOhm->Text = L"Mega Ohm";
			this->rBMOhm->UseVisualStyleBackColor = true;
			this->rBMOhm->CheckedChanged += gcnew System::EventHandler(this, &Form1::rBMOhm_CheckedChanged);
			// 
			// tBNilaiResistansi
			// 
			this->tBNilaiResistansi->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tBNilaiResistansi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tBNilaiResistansi->Location = System::Drawing::Point(44, 37);
			this->tBNilaiResistansi->Name = L"tBNilaiResistansi";
			this->tBNilaiResistansi->ReadOnly = true;
			this->tBNilaiResistansi->Size = System::Drawing::Size(198, 20);
			this->tBNilaiResistansi->TabIndex = 4;
			this->tBNilaiResistansi->Text = L"Niali Resistansi";
			this->tBNilaiResistansi->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tBTemp
			// 
			this->tBTemp->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tBTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tBTemp->Location = System::Drawing::Point(120, 64);
			this->tBTemp->Name = L"tBTemp";
			this->tBTemp->ReadOnly = true;
			this->tBTemp->Size = System::Drawing::Size(160, 20);
			this->tBTemp->TabIndex = 4;
			this->tBTemp->Text = L"Temperature Coefficient";
			this->tBTemp->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tBResMax
			// 
			this->tBResMax->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tBResMax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tBResMax->Location = System::Drawing::Point(88, 91);
			this->tBResMax->Name = L"tBResMax";
			this->tBResMax->ReadOnly = true;
			this->tBResMax->Size = System::Drawing::Size(118, 20);
			this->tBResMax->TabIndex = 4;
			this->tBResMax->Text = L"Resistansi Maximum";
			this->tBResMax->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tBNilaiToleransi
			// 
			this->tBNilaiToleransi->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tBNilaiToleransi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tBNilaiToleransi->Location = System::Drawing::Point(248, 37);
			this->tBNilaiToleransi->Name = L"tBNilaiToleransi";
			this->tBNilaiToleransi->ReadOnly = true;
			this->tBNilaiToleransi->Size = System::Drawing::Size(115, 20);
			this->tBNilaiToleransi->TabIndex = 4;
			this->tBNilaiToleransi->Text = L"Toleransi (%)";
			this->tBNilaiToleransi->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tBResMin
			// 
			this->tBResMin->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tBResMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tBResMin->Location = System::Drawing::Point(232, 91);
			this->tBResMin->Name = L"tBResMin";
			this->tBResMin->ReadOnly = true;
			this->tBResMin->Size = System::Drawing::Size(131, 20);
			this->tBResMin->TabIndex = 4;
			this->tBResMin->Text = L"Resistansi Minimum";
			this->tBResMin->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnHitung
			// 
			this->btnHitung->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnHitung->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHitung->Location = System::Drawing::Point(286, 63);
			this->btnHitung->Name = L"btnHitung";
			this->btnHitung->Size = System::Drawing::Size(77, 23);
			this->btnHitung->TabIndex = 5;
			this->btnHitung->Text = L"Hitung";
			this->btnHitung->UseVisualStyleBackColor = true;
			this->btnHitung->Click += gcnew System::EventHandler(this, &Form1::btnHitung_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nilai :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(5, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Koefisien Temperatur :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(5, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Resistansi :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(60, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Max";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(206, 94);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Min";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->gBSampel);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->groupBox3->Location = System::Drawing::Point(378, 349);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(341, 95);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"SAMPEL RESISTOR";
			// 
			// gBSampel
			// 
			this->gBSampel->Controls->Add(this->sampleGel6);
			this->gBSampel->Controls->Add(this->sampleGel5);
			this->gBSampel->Controls->Add(this->sampleGel4);
			this->gBSampel->Controls->Add(this->sampleGel1);
			this->gBSampel->Controls->Add(this->sampleGel3);
			this->gBSampel->Controls->Add(this->sampleGel2);
			this->gBSampel->Controls->Add(this->pictureBox1);
			this->gBSampel->Location = System::Drawing::Point(10, 11);
			this->gBSampel->Name = L"gBSampel";
			this->gBSampel->Size = System::Drawing::Size(324, 73);
			this->gBSampel->TabIndex = 1;
			this->gBSampel->TabStop = false;
			this->gBSampel->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(299, 41);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// sampleGel2
			// 
			this->sampleGel2->BackColor = System::Drawing::Color::Transparent;
			this->sampleGel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sampleGel2->ForeColor = System::Drawing::Color::White;
			this->sampleGel2->Location = System::Drawing::Point(127, 22);
			this->sampleGel2->Name = L"sampleGel2";
			this->sampleGel2->Size = System::Drawing::Size(10, 30);
			this->sampleGel2->TabIndex = 0;
			this->sampleGel2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->sampleGel2->Visible = false;
			// 
			// sampleGel3
			// 
			this->sampleGel3->BackColor = System::Drawing::Color::Transparent;
			this->sampleGel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sampleGel3->ForeColor = System::Drawing::Color::White;
			this->sampleGel3->Location = System::Drawing::Point(143, 22);
			this->sampleGel3->Name = L"sampleGel3";
			this->sampleGel3->Size = System::Drawing::Size(10, 30);
			this->sampleGel3->TabIndex = 0;
			this->sampleGel3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->sampleGel3->Visible = false;
			// 
			// sampleGel1
			// 
			this->sampleGel1->BackColor = System::Drawing::Color::Transparent;
			this->sampleGel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sampleGel1->ForeColor = System::Drawing::Color::White;
			this->sampleGel1->Location = System::Drawing::Point(90, 19);
			this->sampleGel1->Name = L"sampleGel1";
			this->sampleGel1->Size = System::Drawing::Size(10, 36);
			this->sampleGel1->TabIndex = 0;
			this->sampleGel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->sampleGel1->Visible = false;
			// 
			// sampleGel4
			// 
			this->sampleGel4->BackColor = System::Drawing::Color::Transparent;
			this->sampleGel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sampleGel4->ForeColor = System::Drawing::Color::White;
			this->sampleGel4->Location = System::Drawing::Point(159, 22);
			this->sampleGel4->Name = L"sampleGel4";
			this->sampleGel4->Size = System::Drawing::Size(10, 30);
			this->sampleGel4->TabIndex = 0;
			this->sampleGel4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->sampleGel4->Visible = false;
			// 
			// sampleGel5
			// 
			this->sampleGel5->BackColor = System::Drawing::Color::Transparent;
			this->sampleGel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sampleGel5->ForeColor = System::Drawing::Color::White;
			this->sampleGel5->Location = System::Drawing::Point(175, 22);
			this->sampleGel5->Name = L"sampleGel5";
			this->sampleGel5->Size = System::Drawing::Size(10, 30);
			this->sampleGel5->TabIndex = 0;
			this->sampleGel5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->sampleGel5->Visible = false;
			// 
			// sampleGel6
			// 
			this->sampleGel6->BackColor = System::Drawing::Color::Transparent;
			this->sampleGel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sampleGel6->ForeColor = System::Drawing::Color::White;
			this->sampleGel6->Location = System::Drawing::Point(211, 19);
			this->sampleGel6->Name = L"sampleGel6";
			this->sampleGel6->Size = System::Drawing::Size(10, 36);
			this->sampleGel6->TabIndex = 0;
			this->sampleGel6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->sampleGel6->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(387, 451);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(79, 17);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"View Table";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 24);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(731, 502);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(730, 562);
			this->Controls->Add(this->btnKeluar);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnDetail);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Resistor Solver - M.Sagita";
			this->Activated += gcnew System::EventHandler(this, &Form1::Form1_Activated);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->gBGel1->ResumeLayout(false);
			this->gBGel3->ResumeLayout(false);
			this->gBGelToleransi->ResumeLayout(false);
			this->gBGel2->ResumeLayout(false);
			this->gBGelPengali->ResumeLayout(false);
			this->gBGelTemp->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->gBSampel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

int gelang1, gelang2, gelang3, gelangTemp;
double gelangPengali,nilai,toleransi,gelangToleransi,nilairesmax,nilairesmin,satuan,nilaitoleransi,hasil,hasilkon,nilairesmax1, nilairesmin1;


private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			sampleGel1->Hide();sampleGel2->Hide();sampleGel3->Hide();
			sampleGel4->Hide();sampleGel5->Hide();sampleGel6->Hide();
			gBSampel->Hide();
			
		 }

private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
			radioButton1->Checked=false;
			radioButton2->Checked=false;
			radioButton3->Checked=false;
			gBGel1->Enabled=false;
			gBGel2->Enabled=false;
			gBGel3->Enabled=false;
			gBGelPengali->Enabled=false;
			gBGelToleransi->Enabled=false;
			gBGelTemp->Enabled=false;
			gelang1=0; gelang2=0; gelang3=0; gelangPengali=0; gelangTemp=0; gelangToleransi=0;
			nilai=0;
			nilairesmax=0;nilairesmin=0;
			satuan=0;
			tBNilaiResistansi->Text= L"Nilai Resistansi";
			tBNilaiToleransi->Text= L"Toleransi (%)";
			tBTemp->Text= L"Temperatur";
			textBox1->Text = L"Warna 1";
			textBox2->Text = L"Warna 2";
			textBox3->Text = L"Warna 3";
			textBox4->Text = L"Pengali";
			textBox5->Text = L"Toleransi";
			textBox6->Text = L"Temperatur";
			tBResMax->Text = L"Resistansi Max";
			tBResMin->Text = L"Resistansi Min";
			textBox1->ForeColor = System::Drawing::Color::Black; textBox1->BackColor = System::Drawing::Color::White;
			textBox2->ForeColor = System::Drawing::Color::Black; textBox2->BackColor = System::Drawing::Color::White;
			textBox3->ForeColor = System::Drawing::Color::Black; textBox3->BackColor = System::Drawing::Color::White;
			textBox4->ForeColor = System::Drawing::Color::Black; textBox4->BackColor = System::Drawing::Color::White;
			textBox5->ForeColor = System::Drawing::Color::Black; textBox5->BackColor = System::Drawing::Color::White;
			textBox6->ForeColor = System::Drawing::Color::Black; textBox6->BackColor = System::Drawing::Color::White;
			sampleGel1->BackColor = System::Drawing::Color::White;
			sampleGel2->BackColor = System::Drawing::Color::White;
			sampleGel3->BackColor = System::Drawing::Color::White;
			sampleGel4->BackColor = System::Drawing::Color::White;
			sampleGel5->BackColor = System::Drawing::Color::White;
			sampleGel6->BackColor = System::Drawing::Color::White;
			sampleGel1->Hide();sampleGel2->Hide();sampleGel3->Hide();
			sampleGel4->Hide();sampleGel5->Hide();sampleGel6->Hide();
		 }
//View Sample Resistor Check
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBox1->Checked==true){
				 gBSampel->Show();
			 }
			 if(checkBox1->Checked==false){
				 gBSampel->Hide();
			 }
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			gBGel1->Enabled=true;
			gBGel2->Enabled=true;
			gBGel3->Enabled=false;
			gBGelPengali->Enabled=true;
			gBGelToleransi->Enabled=true;
			gBGelTemp->Enabled=false;
			sampleGel1->Show();sampleGel2->Show();sampleGel3->Show();
			sampleGel4->Hide();sampleGel5->Hide();sampleGel6->Show();
			lbKet->Text = L"Pilih Warna Gelang";
			textBox3->Text = L"Warna 3";
			textBox3->ForeColor = System::Drawing::Color::Black;
			textBox3->BackColor = System::Drawing::Color::White;
			gelang3=0;
			textBox6->Text = L"Temperatur";
			textBox6->ForeColor = System::Drawing::Color::Black;
			textBox6->BackColor = System::Drawing::Color::White;
			gelangTemp=0;
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			gBGel1->Enabled=true;
			gBGel2->Enabled=true;
			gBGel3->Enabled=true;
			gBGelPengali->Enabled=true;
			gBGelToleransi->Enabled=true;
			gBGelTemp->Enabled=false;
			sampleGel1->Show();sampleGel2->Show();sampleGel3->Show();
			sampleGel4->Show();sampleGel5->Hide();sampleGel6->Show();
			textBox6->Text = L"Temperatur";
			textBox6->ForeColor = System::Drawing::Color::Black;
			textBox6->BackColor = System::Drawing::Color::White;
			gelangTemp=0;
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			gBGel1->Enabled=true;
			gBGel2->Enabled=true;
			gBGel3->Enabled=true;
			gBGelPengali->Enabled=true;
			gBGelToleransi->Enabled=true;
			gBGelTemp->Enabled=true;
			sampleGel1->Show();sampleGel2->Show();sampleGel3->Show();
			sampleGel4->Show();sampleGel5->Show();sampleGel6->Show();
		 }
private: System::Void lbHitam1_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang1=0; 
			 textBox1->Text = (Convert::ToString(gelang1));
			 textBox1->ForeColor = System::Drawing::Color::White;
			 textBox1->BackColor = System::Drawing::Color::Black;
			 sampleGel1->BackColor = System::Drawing::Color::Black;
			 
		 }
private: System::Void lbCokelat1_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang1=1;
			 textBox1->Text = (Convert::ToString(gelang1));
			 textBox1->ForeColor = System::Drawing::Color::White;
			 textBox1->BackColor = System::Drawing::Color::Chocolate;
			 sampleGel1->BackColor = System::Drawing::Color::Chocolate;
		 }
private: System::Void lbMerah1_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang1=2;
			 textBox1->Text = (Convert::ToString(gelang1));
			 textBox1->ForeColor = System::Drawing::Color::White;
			 textBox1->BackColor = System::Drawing::Color::Red;
			 sampleGel1->BackColor = System::Drawing::Color::Red;
		 }
private: System::Void lbJingga1_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang1=3;
			 textBox1->Text = (Convert::ToString(gelang1));
			 textBox1->ForeColor = System::Drawing::Color::Black;
			 textBox1->BackColor = System::Drawing::Color::Orange;
			 sampleGel1->BackColor = System::Drawing::Color::Orange;
		 }
private: System::Void lbKuning1_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang1=4; //Memeri nilai pada variabel gelang1 = 4
			 textBox1->Text = (Convert::ToString(gelang1)); //Merubah Text menjadi gelang1 = 4
			 textBox1->ForeColor = System::Drawing::Color::Black; //Merubah Warna Tulisan -> Hitam
			 textBox1->BackColor = System::Drawing::Color::Yellow; //Merubah Warna Background -> Kuning
			 sampleGel1->BackColor = System::Drawing::Color::Yellow; ////Merubah Warna Background -> Kuning
		 }
private: System::Void lbHijau1_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang1=5;
			 textBox1->Text = (Convert::ToString(gelang1));
			 textBox1->ForeColor = System::Drawing::Color::White;
			 textBox1->BackColor = System::Drawing::Color::Green;
			 sampleGel1->BackColor = System::Drawing::Color::Green;
		 }
private: System::Void lbBiru1_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang1=6;
			 textBox1->Text = (Convert::ToString(gelang1));
			 textBox1->ForeColor = System::Drawing::Color::White;
			 textBox1->BackColor = System::Drawing::Color::Blue;
			 sampleGel1->BackColor = System::Drawing::Color::Blue;
		 }
private: System::Void lbUngu1_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang1=7;
			 textBox1->Text = (Convert::ToString(gelang1));
			 textBox1->ForeColor = System::Drawing::Color::White;
			 textBox1->BackColor = System::Drawing::Color::Purple;
			 sampleGel1->BackColor = System::Drawing::Color::Purple;
		 }
private: System::Void lbAbu1_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang1=8;
			 textBox1->Text = (Convert::ToString(gelang1));
			 textBox1->ForeColor = System::Drawing::Color::White;
			 textBox1->BackColor = System::Drawing::Color::Gray;
			 sampleGel1->BackColor = System::Drawing::Color::Gray;
		 }
private: System::Void lbPutih1_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang1=9;
			 textBox1->Text = (Convert::ToString(gelang1));
			 textBox1->ForeColor = System::Drawing::Color::Black;
			 textBox1->BackColor = System::Drawing::Color::White;
			 sampleGel1->BackColor = System::Drawing::Color::White;
		 }
//-------------------------------------------------------------------------------------------
private: System::Void lbHitam2_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang2=0;
			 textBox2->Text = (Convert::ToString(gelang2));
			 textBox2->ForeColor = System::Drawing::Color::White;
			 textBox2->BackColor = System::Drawing::Color::Black;
			 sampleGel2->BackColor = System::Drawing::Color::Black;
		 }
private: System::Void lbCokelat2_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang2=1;
			 textBox2->Text = (Convert::ToString(gelang2));
			 textBox2->ForeColor = System::Drawing::Color::White;
			 textBox2->BackColor = System::Drawing::Color::Chocolate;
			 sampleGel2->BackColor = System::Drawing::Color::Chocolate;
		 }
private: System::Void lbMerah2_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang2=2;
			 textBox2->Text = (Convert::ToString(gelang2));
			 textBox2->ForeColor = System::Drawing::Color::White;
			 textBox2->BackColor = System::Drawing::Color::Red;
			 sampleGel2->BackColor = System::Drawing::Color::Red;
		 }
private: System::Void lbJingga2_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang2=3;
			 textBox2->Text = (Convert::ToString(gelang2));
			 textBox2->BackColor = System::Drawing::Color::Orange;
			 sampleGel2->BackColor = System::Drawing::Color::Orange;
		 }
private: System::Void lbKuning2_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang2=4;
			 textBox2->Text = (Convert::ToString(gelang2));
			 textBox2->ForeColor = System::Drawing::Color::Black;
			 textBox2->BackColor = System::Drawing::Color::Yellow;
			 sampleGel2->BackColor = System::Drawing::Color::Yellow;
		 }
private: System::Void lbHijau2_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang2=5;
			 textBox2->Text = (Convert::ToString(gelang2));
			 textBox2->ForeColor = System::Drawing::Color::White;
			 textBox2->BackColor = System::Drawing::Color::Green;
			 sampleGel2->BackColor = System::Drawing::Color::Green;
		 }
private: System::Void lbBiru2_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang2=6;
			 textBox2->Text = (Convert::ToString(gelang2));
			 textBox2->ForeColor = System::Drawing::Color::White;
			 textBox2->BackColor = System::Drawing::Color::Blue;
			 sampleGel2->BackColor = System::Drawing::Color::Blue;
		 }
private: System::Void lbUngu2_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang2=7;
			 textBox2->Text = (Convert::ToString(gelang2));
			 textBox2->ForeColor = System::Drawing::Color::White;
			 textBox2->BackColor = System::Drawing::Color::Purple;
			 sampleGel2->BackColor = System::Drawing::Color::Purple;
		 }
private: System::Void lbAbu2_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang2=8;
			 textBox2->Text = (Convert::ToString(gelang2));
			 textBox2->ForeColor = System::Drawing::Color::White;
			 textBox2->BackColor = System::Drawing::Color::Gray;
			 sampleGel2->BackColor = System::Drawing::Color::Gray;
		 }
private: System::Void lbPutih2_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang2=9;
			 textBox2->Text = (Convert::ToString(gelang2));
			 textBox2->ForeColor = System::Drawing::Color::Black;
			 textBox2->BackColor = System::Drawing::Color::White;
			 sampleGel2->BackColor = System::Drawing::Color::White;
		 }
//-------------------------------------------------------------------------------------------
private: System::Void lbHitam3_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang3=0;
			 textBox3->Text = (Convert::ToString(gelang3));
			 textBox3->ForeColor = System::Drawing::Color::White;
			 textBox3->BackColor = System::Drawing::Color::Black;
			 sampleGel3->BackColor = System::Drawing::Color::Black;
		 }
private: System::Void lbCokelat3_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang3=1;
			 textBox3->Text = (Convert::ToString(gelang3));
			 textBox3->ForeColor = System::Drawing::Color::White;
			 textBox3->BackColor = System::Drawing::Color::Chocolate;
			 sampleGel3->BackColor = System::Drawing::Color::Chocolate;
		 }
private: System::Void lbMerah3_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang3=2;
			 textBox3->Text = (Convert::ToString(gelang3));
			 textBox3->ForeColor = System::Drawing::Color::White;
			 textBox3->BackColor = System::Drawing::Color::Red;
			 sampleGel3->BackColor = System::Drawing::Color::Red;
		 }
private: System::Void lbJingga3_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang3=3;
			 textBox3->Text = (Convert::ToString(gelang3));
			 textBox3->ForeColor = System::Drawing::Color::Black;
			 textBox3->BackColor = System::Drawing::Color::Orange;
			 sampleGel3->BackColor = System::Drawing::Color::Orange;
		 }
private: System::Void lbKuning3_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang3=4;
			 textBox3->Text = (Convert::ToString(gelang3));
			 textBox3->ForeColor = System::Drawing::Color::Black;
			 textBox3->BackColor = System::Drawing::Color::Yellow;
			 sampleGel3->BackColor = System::Drawing::Color::Yellow;
		 }
private: System::Void lbHijau3_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang3=5;
			 textBox3->Text = (Convert::ToString(gelang3));
			 textBox3->ForeColor = System::Drawing::Color::White;
			 textBox3->BackColor = System::Drawing::Color::Green;
			 sampleGel3->BackColor = System::Drawing::Color::Green;
		 }
private: System::Void lbBiru3_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang3=6;
			 textBox3->Text = (Convert::ToString(gelang3));
			 textBox3->ForeColor = System::Drawing::Color::White;
			 textBox3->BackColor = System::Drawing::Color::Blue;
			 sampleGel3->BackColor = System::Drawing::Color::Blue;
		 }
private: System::Void lbUngu3_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang3=7;
			 textBox3->Text = (Convert::ToString(gelang3));
			 textBox3->ForeColor = System::Drawing::Color::White;
			 textBox3->BackColor = System::Drawing::Color::Purple;
			 sampleGel3->BackColor = System::Drawing::Color::Purple;
		 }
private: System::Void lbAbu3_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang3=8;
			 textBox3->Text = (Convert::ToString(gelang3));
			 textBox3->ForeColor = System::Drawing::Color::White;
			 textBox3->BackColor = System::Drawing::Color::Gray;
			 sampleGel3->BackColor = System::Drawing::Color::Gray;
		 }
private: System::Void lbPutih3_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelang3=9;
			 textBox3->Text = (Convert::ToString(gelang3));
			 textBox3->ForeColor = System::Drawing::Color::Black;
			 textBox3->BackColor = System::Drawing::Color::White;
			 sampleGel3->BackColor = System::Drawing::Color::White;
		 }
//-------------------------------------------------------------------------------------------
private: System::Void lbHitamPengali_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangPengali=1;
			 textBox4->Text = (Convert::ToString(gelangPengali));
			 textBox4->ForeColor = System::Drawing::Color::White;
			 textBox4->BackColor = System::Drawing::Color::Black;
			 if(radioButton1->Checked == true){
				sampleGel3->BackColor = System::Drawing::Color::Black;
			 }
			 sampleGel4->BackColor = System::Drawing::Color::Black;
		 }
private: System::Void lbCokelatPengali_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangPengali=10;
			 textBox4->Text = (Convert::ToString(gelangPengali));
			 textBox4->ForeColor = System::Drawing::Color::White;
			 textBox4->BackColor = System::Drawing::Color::Chocolate;
			 if(radioButton1->Checked == true){
				sampleGel3->BackColor = System::Drawing::Color::Chocolate;
			 }
			 sampleGel4->BackColor = System::Drawing::Color::Chocolate;
		 }
private: System::Void lbMerahPengali_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangPengali=100;
			 textBox4->Text = (Convert::ToString(gelangPengali));
			 textBox4->ForeColor = System::Drawing::Color::White;
			 textBox4->BackColor = System::Drawing::Color::Red;
			 if(radioButton1->Checked == true){
				sampleGel3->BackColor = System::Drawing::Color::Red;
			 }
			 sampleGel4->BackColor = System::Drawing::Color::Red;
		 }
private: System::Void lbJinggaPengali_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangPengali=1000;
			 textBox4->Text = (Convert::ToString(gelangPengali));
			 textBox4->ForeColor = System::Drawing::Color::Black;
			 textBox4->BackColor = System::Drawing::Color::Orange;
			 if(radioButton1->Checked == true){
				sampleGel3->BackColor = System::Drawing::Color::Orange;
			 }
			 sampleGel4->BackColor = System::Drawing::Color::Orange;
		 }
private: System::Void lbKuningPengali_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangPengali=10000;
			 textBox4->Text = (Convert::ToString(gelangPengali));
			 textBox4->ForeColor = System::Drawing::Color::Black;
			 textBox4->BackColor = System::Drawing::Color::Yellow;
			 if(radioButton1->Checked == true){
				sampleGel3->BackColor = System::Drawing::Color::Yellow;
			 }
			 sampleGel4->BackColor = System::Drawing::Color::Yellow;
		 }
private: System::Void lbHijauPengali_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangPengali=100000;
			 textBox4->Text = (Convert::ToString(gelangPengali));
			 textBox4->ForeColor = System::Drawing::Color::White;
			 textBox4->BackColor = System::Drawing::Color::Green;
			 if(radioButton1->Checked == true){
				sampleGel3->BackColor = System::Drawing::Color::Green;
			 }
			 sampleGel4->BackColor = System::Drawing::Color::Green;
		 }
private: System::Void lbBiruPengali_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangPengali=1000000;
			 textBox4->Text = (Convert::ToString(gelangPengali));
			 textBox4->ForeColor = System::Drawing::Color::White;
			 textBox4->BackColor = System::Drawing::Color::Blue;
			 if(radioButton1->Checked == true){
				sampleGel3->BackColor = System::Drawing::Color::Blue;
			 }
			 sampleGel4->BackColor = System::Drawing::Color::Blue;
		 }
private: System::Void lbUnguPengali_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangPengali=10000000;
			 textBox4->Text = (Convert::ToString(gelangPengali));
			 textBox4->ForeColor = System::Drawing::Color::White;
			 textBox4->BackColor = System::Drawing::Color::Purple;
			 if(radioButton1->Checked == true){
				sampleGel3->BackColor = System::Drawing::Color::Purple;
			 }
			 sampleGel4->BackColor = System::Drawing::Color::Purple;
		 }
private: System::Void lbEmasPengali_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangPengali=0.1;
			 textBox4->Text = (Convert::ToString(gelangPengali));
			 textBox4->ForeColor = System::Drawing::Color::Black;
			 textBox4->BackColor = System::Drawing::Color::Goldenrod;
			 if(radioButton1->Checked == true){
				sampleGel3->BackColor = System::Drawing::Color::Goldenrod;
			 }
			 sampleGel4->BackColor = System::Drawing::Color::Goldenrod;
		 }
private: System::Void lbSilverPengali_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangPengali=0.01;
			 textBox4->Text = (Convert::ToString(gelangPengali));
			 textBox4->ForeColor = System::Drawing::Color::Black;
			 textBox4->BackColor = System::Drawing::Color::Silver;
			 if(radioButton1->Checked == true){
				sampleGel3->BackColor = System::Drawing::Color::Silver;
			 }
			 sampleGel4->BackColor = System::Drawing::Color::Silver;
		 }
//-------------------------------------------------------------------------------------------
private: System::Void lbCokelatToleransi_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangToleransi=1;
			 textBox5->Text = L"1%";
			 textBox5->ForeColor = System::Drawing::Color::White;
			 textBox5->BackColor = System::Drawing::Color::Chocolate;
			 if(radioButton1->Checked == true||radioButton2->Checked == true){
				sampleGel6->BackColor = System::Drawing::Color::Chocolate;
				sampleGel6->Show();
			 }
			 sampleGel5->BackColor = System::Drawing::Color::Chocolate;
			 tBNilaiToleransi->Text = L"+/- 1%";
		 }
private: System::Void lbMerahToleransi_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangToleransi=2;
			 textBox5->Text = L"2%";
			 textBox5->ForeColor = System::Drawing::Color::White;
			 textBox5->BackColor = System::Drawing::Color::Red;
			 if(radioButton1->Checked == true||radioButton2->Checked == true){
				sampleGel6->BackColor = System::Drawing::Color::Red;
				sampleGel6->Show();
			 }
			 sampleGel5->BackColor = System::Drawing::Color::Red;
			 tBNilaiToleransi->Text = L"+/- 2%";
		 }
private: System::Void lbHijauToleransi_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangToleransi=0.5;
			 textBox5->Text = L"0.5%";
			 textBox5->ForeColor = System::Drawing::Color::White;
			 textBox5->BackColor = System::Drawing::Color::Green;
			 if(radioButton1->Checked == true||radioButton2->Checked == true){
				sampleGel6->BackColor = System::Drawing::Color::Green;
				sampleGel6->Show();
			 }
			 sampleGel5->BackColor = System::Drawing::Color::Green;
			 tBNilaiToleransi->Text = L"+/- 0.5%";
		 }
private: System::Void lbBiruToleransi_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangToleransi=0.25;
			 textBox5->Text = L"0.25%";
			 textBox5->ForeColor = System::Drawing::Color::White;
			 textBox5->BackColor = System::Drawing::Color::Blue;
			 if(radioButton1->Checked == true||radioButton2->Checked == true){
				sampleGel6->BackColor = System::Drawing::Color::Blue;
				sampleGel6->Show();
			 }
			 sampleGel5->BackColor = System::Drawing::Color::Blue;
			 tBNilaiToleransi->Text = L"+/- 0.25%";
		 }
private: System::Void lbUnguToleransi_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangToleransi=0.1;
			 textBox5->Text = L"0.1%";
			 textBox5->ForeColor = System::Drawing::Color::White;
			 textBox5->BackColor = System::Drawing::Color::Purple;
			 if(radioButton1->Checked == true||radioButton2->Checked == true){
				sampleGel6->BackColor = System::Drawing::Color::Purple;
				sampleGel6->Show();
			 }
			 sampleGel5->BackColor = System::Drawing::Color::Purple;
			 tBNilaiToleransi->Text = L"+/- 0.1%";
		 }
private: System::Void lbAbuToleransi_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangToleransi=0.05;
			 textBox5->Text = L"0.05%";
			 textBox5->ForeColor = System::Drawing::Color::Black;
			 textBox5->BackColor = System::Drawing::Color::Gray;
			 if(radioButton1->Checked == true||radioButton2->Checked == true){
				sampleGel6->BackColor = System::Drawing::Color::Gray;
				sampleGel6->Show();
			 }
			 sampleGel5->BackColor = System::Drawing::Color::Gray;
			 tBNilaiToleransi->Text = L"+/- 0.05%";
		 }
private: System::Void lbEmasToleransi_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangToleransi=5;
			 textBox5->Text = L"5%";
			 textBox5->ForeColor = System::Drawing::Color::Black;
			 textBox5->BackColor = System::Drawing::Color::Goldenrod;
			 if(radioButton1->Checked == true||radioButton2->Checked == true){
				sampleGel6->BackColor = System::Drawing::Color::Goldenrod;
				sampleGel6->Show();
			 }
			 sampleGel5->BackColor = System::Drawing::Color::Goldenrod;
			 tBNilaiToleransi->Text = L"+/- 5%";
		 }
private: System::Void lbSilverToleransi_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangToleransi=5;
			 textBox5->Text = L"10%";
			 textBox5->ForeColor = System::Drawing::Color::Black;
			 textBox5->BackColor = System::Drawing::Color::Silver;
			 if(radioButton1->Checked == true||radioButton2->Checked == true){
				sampleGel6->BackColor = System::Drawing::Color::Silver;
				sampleGel6->Show();
			 }
			 sampleGel5->BackColor = System::Drawing::Color::Silver;
			 tBNilaiToleransi->Text = L"+/- 10%";
		 }
private: System::Void lbKosongToleransi_Click(System::Object^  sender, System::EventArgs^  e) {
			 gelangToleransi=20;
			 textBox5->Text = L"20%";
			 textBox5->ForeColor = System::Drawing::Color::Black;
			 textBox5->BackColor = System::Drawing::Color::White;
			 if(radioButton1->Checked == true||radioButton2->Checked == true){
				sampleGel6->Hide();
			 }
			 sampleGel5->BackColor = System::Drawing::Color::White;
			 tBNilaiToleransi->Text = L"+/- 20%";
		 }
//-------------------------------------------------------------------------------------------
private: System::Void lbCokelatTemp_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox6->Text = L"100ppm";
			 textBox6->ForeColor = System::Drawing::Color::White;
			 textBox6->BackColor = System::Drawing::Color::Chocolate;
			 sampleGel6->BackColor = System::Drawing::Color::Chocolate;
			 tBTemp->Text = L"100ppm";
		 }
private: System::Void lbMerahTemp_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox6->Text = L"150ppm";
			 textBox6->ForeColor = System::Drawing::Color::White;
			 textBox6->BackColor = System::Drawing::Color::Red;
			 sampleGel6->BackColor = System::Drawing::Color::Red;
			 tBTemp->Text = L"150ppm";
		 }
private: System::Void lbJinggaTemp_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox6->Text = L"15ppm";
			 textBox6->ForeColor = System::Drawing::Color::Black;
			 textBox6->BackColor = System::Drawing::Color::Orange;
			 sampleGel6->BackColor = System::Drawing::Color::Orange;
			 tBTemp->Text = L"15ppm";
		 }
private: System::Void lbKuningTemp_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox6->Text = L"25ppm";
			 textBox6->ForeColor = System::Drawing::Color::Black;
			 textBox6->BackColor = System::Drawing::Color::Yellow;
			 sampleGel6->BackColor = System::Drawing::Color::Yellow;
			 tBTemp->Text = L"25ppm";
		 }
//-------------------------------------------------------------------------------------------
private: System::Void btnHitung_Click(System::Object^  sender, System::EventArgs^  e) {
			//Kondisi untuk 4 Gelang
			if (radioButton1->Checked == true && gelang1 >= 0 && gelang2 >= 0 && gelangPengali >= 0 && gelangToleransi >= 0) {
				nilai = (gelang1 * 10) + gelang2; //Perhitungan menentukan nilai
			}
			//Kondisi untuk 5 Gelang dan 6 Gelang
			if (radioButton2->Checked == true || radioButton3->Checked == true) {
				nilai = (gelang1 * 100) + (gelang2 * 10) + gelang3; //Perhitungan menentukan nilai
			}
			hasil = nilai * gelangPengali; //Perhitungan menentukan hasil
			tBNilaiResistansi->Text = (Convert::ToString(hasil)); //Menampilkan hasil

			nilaitoleransi = (hasilkon * gelangToleransi) / 100; //Menghitung nilai toleransi
			nilairesmax = hasilkon + nilaitoleransi; //Menghitung nilai resistansi maksimal
			nilairesmin = hasilkon - nilaitoleransi; //Menghitung nilai resistansi minimal
			tBResMax->Text = (Convert::ToString(nilairesmax)); //Menampilkan nilai resistansi maksimal
			tBResMin->Text = (Convert::ToString(nilairesmin)); //Menampilkan nilai resistansi minimal

		 }

private: System::Void Form1_Activated(System::Object^  sender, System::EventArgs^  e) {
			 radioButton1->Checked = true;
			 
		 }

private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
		 }
private: System::Void groupBox16_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnHitung_Click_1(System::Object^  sender, System::EventArgs^  e) {

}

private: System::Void rBOhm_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	hasilkon = hasil / 1; //Membagi hasil awal dan hasil akhir satuan Ohm
	tBNilaiResistansi->Text = (Convert::ToString(hasilkon)); //Menampilkan hasil akhir
	nilaitoleransi = (hasilkon * gelangToleransi) / 100; //Perhitungan menentukan nilai Toleransi
	nilairesmax = hasilkon + nilaitoleransi; //Menghitung nilai resistansi maksimal
	nilairesmin = hasilkon - nilaitoleransi; //Menghitung nilai resistansi minimal
	tBResMax->Text = (Convert::ToString(nilairesmax)); //Menampilkan nilai resistansi maksimal
	tBResMin->Text = (Convert::ToString(nilairesmin)); //Menampilkan nilai resistansi minimal
}
private: System::Void rBKOhm_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	hasilkon = hasil / 1000; //Membagi hasil awal dan hasil akhir satuan Kilo Ohm
	tBNilaiResistansi->Text = (Convert::ToString(hasilkon));
	nilaitoleransi = (hasilkon * gelangToleransi) / 100;
	nilairesmax = hasilkon + nilaitoleransi;
	nilairesmin = hasilkon - nilaitoleransi;
	tBResMax->Text = (Convert::ToString(nilairesmax));
	tBResMin->Text = (Convert::ToString(nilairesmin));
}
private: System::Void rBMOhm_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	hasilkon = hasil / 1000000; //Membagi hasil awal dan hasil akhir satuan Mega Ohm
	tBNilaiResistansi->Text = (Convert::ToString(hasilkon));
	nilaitoleransi = (hasilkon * gelangToleransi) / 100;
	nilairesmax = hasilkon + nilaitoleransi;
	nilairesmin = hasilkon - nilaitoleransi;
	tBResMax->Text = (Convert::ToString(nilairesmax));
	tBResMin->Text = (Convert::ToString(nilairesmin));
}

private: System::Void btnDetail_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Saat ini tidak tersedia", "Sorry",
	MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void btnKeluar_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Terimakasih!", "Resistor Solver",
	MessageBoxButtons::OK, MessageBoxIcon::None);
	Application::Exit();
}
};
}