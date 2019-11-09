#pragma once
#include "Metodos_Busqueda.h"
#include "ctime"
#include <ctime>
#include "cstdlib"
using namespace System::IO;
using namespace System::Diagnostics;

namespace Lab05PabloCuevas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtCantidad;
	public: System::Windows::Forms::Button^ btnGenerar;
	private:
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtMostrar;
	private: System::Windows::Forms::Label^ lblBus;
	private: System::Windows::Forms::TextBox^ txtValorBuscar;
	private: System::Windows::Forms::CheckBox^ checkBoxSi;
	private: System::Windows::Forms::CheckBox^ checkBoxNo;


	private: System::Windows::Forms::Label^ lblPregunta;
	private: System::Windows::Forms::Label^ lblRespuesta;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnReiniciar;
	private: System::Windows::Forms::ComboBox^ comboBoxOpciones;
	private: System::Windows::Forms::Label^ lblTiempo;
	private: System::Windows::Forms::Label^ lblTemp;
	private: System::Windows::Forms::Label^ lblAd;
	private: System::Windows::Forms::Label^ lblHash;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtMostrar = (gcnew System::Windows::Forms::TextBox());
			this->lblBus = (gcnew System::Windows::Forms::Label());
			this->txtValorBuscar = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxSi = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxNo = (gcnew System::Windows::Forms::CheckBox());
			this->lblPregunta = (gcnew System::Windows::Forms::Label());
			this->lblRespuesta = (gcnew System::Windows::Forms::Label());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnReiniciar = (gcnew System::Windows::Forms::Button());
			this->comboBoxOpciones = (gcnew System::Windows::Forms::ComboBox());
			this->lblTiempo = (gcnew System::Windows::Forms::Label());
			this->lblTemp = (gcnew System::Windows::Forms::Label());
			this->lblAd = (gcnew System::Windows::Forms::Label());
			this->lblHash = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtCantidad
			// 
			this->txtCantidad->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCantidad->Location = System::Drawing::Point(84, 63);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(100, 23);
			this->txtCantidad->TabIndex = 0;
			// 
			// btnGenerar
			// 
			this->btnGenerar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerar->Location = System::Drawing::Point(306, 43);
			this->btnGenerar->Name = L"btnGenerar";
			this->btnGenerar->Size = System::Drawing::Size(75, 43);
			this->btnGenerar->TabIndex = 1;
			this->btnGenerar->Text = L"Generar Números";
			this->btnGenerar->UseVisualStyleBackColor = true;
			this->btnGenerar->Click += gcnew System::EventHandler(this, &MyForm::BtnGenerar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingrese cantidad de números del Array (arreglo):";
			// 
			// txtMostrar
			// 
			this->txtMostrar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMostrar->Location = System::Drawing::Point(65, 111);
			this->txtMostrar->Multiline = true;
			this->txtMostrar->Name = L"txtMostrar";
			this->txtMostrar->ReadOnly = true;
			this->txtMostrar->Size = System::Drawing::Size(24, 184);
			this->txtMostrar->TabIndex = 3;
			this->txtMostrar->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblBus
			// 
			this->lblBus->AutoSize = true;
			this->lblBus->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBus->Location = System::Drawing::Point(124, 160);
			this->lblBus->Name = L"lblBus";
			this->lblBus->Size = System::Drawing::Size(158, 15);
			this->lblBus->TabIndex = 4;
			this->lblBus->Text = L"¿Qué elemento desea buscar\?";
			this->lblBus->Visible = false;
			// 
			// txtValorBuscar
			// 
			this->txtValorBuscar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtValorBuscar->Location = System::Drawing::Point(127, 185);
			this->txtValorBuscar->Name = L"txtValorBuscar";
			this->txtValorBuscar->Size = System::Drawing::Size(100, 23);
			this->txtValorBuscar->TabIndex = 5;
			this->txtValorBuscar->Visible = false;
			// 
			// checkBoxSi
			// 
			this->checkBoxSi->AutoSize = true;
			this->checkBoxSi->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxSi->Location = System::Drawing::Point(127, 140);
			this->checkBoxSi->Name = L"checkBoxSi";
			this->checkBoxSi->Size = System::Drawing::Size(38, 19);
			this->checkBoxSi->TabIndex = 6;
			this->checkBoxSi->Text = L"Si";
			this->checkBoxSi->UseVisualStyleBackColor = true;
			this->checkBoxSi->Visible = false;
			this->checkBoxSi->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBoxSi_CheckedChanged);
			// 
			// checkBoxNo
			// 
			this->checkBoxNo->AutoSize = true;
			this->checkBoxNo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxNo->Location = System::Drawing::Point(220, 140);
			this->checkBoxNo->Name = L"checkBoxNo";
			this->checkBoxNo->Size = System::Drawing::Size(41, 19);
			this->checkBoxNo->TabIndex = 7;
			this->checkBoxNo->Text = L"No";
			this->checkBoxNo->UseVisualStyleBackColor = true;
			this->checkBoxNo->Visible = false;
			this->checkBoxNo->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBoxNo_CheckedChanged);
			// 
			// lblPregunta
			// 
			this->lblPregunta->AutoSize = true;
			this->lblPregunta->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPregunta->Location = System::Drawing::Point(126, 121);
			this->lblPregunta->Name = L"lblPregunta";
			this->lblPregunta->Size = System::Drawing::Size(150, 15);
			this->lblPregunta->TabIndex = 8;
			this->lblPregunta->Text = L"¿Desea buscar un elemento\?";
			this->lblPregunta->Visible = false;
			// 
			// lblRespuesta
			// 
			this->lblRespuesta->AutoSize = true;
			this->lblRespuesta->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRespuesta->Location = System::Drawing::Point(102, 217);
			this->lblRespuesta->Name = L"lblRespuesta";
			this->lblRespuesta->Size = System::Drawing::Size(16, 15);
			this->lblRespuesta->TabIndex = 9;
			this->lblRespuesta->Text = L"...";
			this->lblRespuesta->Visible = false;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->Location = System::Drawing::Point(342, 184);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(57, 23);
			this->btnBuscar->TabIndex = 10;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Visible = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &MyForm::BtnBuscar_Click);
			// 
			// btnReiniciar
			// 
			this->btnReiniciar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReiniciar->Location = System::Drawing::Point(186, 264);
			this->btnReiniciar->Name = L"btnReiniciar";
			this->btnReiniciar->Size = System::Drawing::Size(75, 23);
			this->btnReiniciar->TabIndex = 11;
			this->btnReiniciar->Text = L"Reiniciar";
			this->btnReiniciar->UseVisualStyleBackColor = true;
			this->btnReiniciar->Visible = false;
			this->btnReiniciar->Click += gcnew System::EventHandler(this, &MyForm::BtnReiniciar_Click);
			// 
			// comboBoxOpciones
			// 
			this->comboBoxOpciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBoxOpciones->FormattingEnabled = true;
			this->comboBoxOpciones->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Búsqueda Secuencial", L"Búsqueda Binaria",
					L"Búsqueda Hash"
			});
			this->comboBoxOpciones->Location = System::Drawing::Point(233, 186);
			this->comboBoxOpciones->Name = L"comboBoxOpciones";
			this->comboBoxOpciones->Size = System::Drawing::Size(103, 21);
			this->comboBoxOpciones->TabIndex = 12;
			this->comboBoxOpciones->Visible = false;
			// 
			// lblTiempo
			// 
			this->lblTiempo->AutoSize = true;
			this->lblTiempo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempo->Location = System::Drawing::Point(221, 239);
			this->lblTiempo->Name = L"lblTiempo";
			this->lblTiempo->Size = System::Drawing::Size(16, 15);
			this->lblTiempo->TabIndex = 13;
			this->lblTiempo->Text = L"...";
			this->lblTiempo->Visible = false;
			// 
			// lblTemp
			// 
			this->lblTemp->AutoSize = true;
			this->lblTemp->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTemp->Location = System::Drawing::Point(126, 239);
			this->lblTemp->Name = L"lblTemp";
			this->lblTemp->Size = System::Drawing::Size(92, 15);
			this->lblTemp->TabIndex = 14;
			this->lblTemp->Text = L"Tiempo  tardado:";
			this->lblTemp->Visible = false;
			// 
			// lblAd
			// 
			this->lblAd->AutoSize = true;
			this->lblAd->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAd->Location = System::Drawing::Point(283, 264);
			this->lblAd->Name = L"lblAd";
			this->lblAd->Size = System::Drawing::Size(116, 20);
			this->lblAd->TabIndex = 15;
			this->lblAd->Text = L"¡Para este método el vector se \r\nordenó de forma ascendente!";
			this->lblAd->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblAd->Visible = false;
			// 
			// lblHash
			// 
			this->lblHash->AutoSize = true;
			this->lblHash->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHash->Location = System::Drawing::Point(287, 264);
			this->lblHash->Name = L"lblHash";
			this->lblHash->Size = System::Drawing::Size(105, 20);
			this->lblHash->TabIndex = 16;
			this->lblHash->Text = L"¡Para este método se utilizó\r\nuna \"Función Hash\"!";
			this->lblHash->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblHash->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(411, 317);
			this->Controls->Add(this->lblHash);
			this->Controls->Add(this->lblAd);
			this->Controls->Add(this->lblTemp);
			this->Controls->Add(this->lblTiempo);
			this->Controls->Add(this->comboBoxOpciones);
			this->Controls->Add(this->btnReiniciar);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->lblRespuesta);
			this->Controls->Add(this->lblPregunta);
			this->Controls->Add(this->checkBoxNo);
			this->Controls->Add(this->checkBoxSi);
			this->Controls->Add(this->txtValorBuscar);
			this->Controls->Add(this->lblBus);
			this->Controls->Add(this->txtMostrar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGenerar);
			this->Controls->Add(this->txtCantidad);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tabla Hash";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Variables globales
		array <int^>^ separar;
		array <int^>^ separar1;
		int valor;
		//Procedimientos:
	private: System::Void BtnGenerar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtCantidad->Text == "" && checkBoxSi->Visible == false)
		{
			System::Windows::Forms::MessageBox::Show("¡Debe elegir la cantidad de números!");
		}
		else
		{
			if (txtCantidad->Text != "")
			{
				txtMostrar->Text = "";
				valor = Int32::Parse(txtCantidad->Text);
				//Variable Random
				srand(time(NULL));
				//Vector donde se guardaran los primeros numeros generados
				separar = gcnew array <int^>(valor);
				separar1 = gcnew array <int^>(valor);
				for (int i = 0; i < valor; i++)
				{
					int numRan = rand() % 100;
					separar[i] = numRan;
					separar1[i] = numRan;
				}
				//Mostrar numeros en el Label
				for (int i = 0; i < valor; i++)
				{
					txtMostrar->Text += (separar[i]) + " ";
				}
				txtCantidad->Text = "";
				txtCantidad->ReadOnly = true;
				lblPregunta->Visible = true;
				checkBoxSi->Visible = true;
				checkBoxNo->Visible = true;
			}
		}
	}
private: System::Void CheckBoxSi_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBoxNo->Enabled = false;
	lblBus->Visible = true;
	txtValorBuscar->Visible = true;
	comboBoxOpciones->Visible = true;
	btnBuscar->Visible = true;
	lblRespuesta->Visible = true;
}
private: System::Void CheckBoxNo_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBoxSi->Visible = false;
	checkBoxNo->Visible = false;
	checkBoxNo->Checked = false;
	lblPregunta->Visible = false;
	txtCantidad->ReadOnly = false;
}
private: System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (comboBoxOpciones->Text == "" || txtValorBuscar->Text == "")
	{
		System::Windows::Forms::MessageBox::Show("¡Debe elegir un método de búsqueda!");
	}
	else
	{
		//Constructor de los metodos de busqueda
		Metodos_Busqueda^ nuevo = gcnew Metodos_Busqueda;
		//
		int valorBus = Int32::Parse(txtValorBuscar->Text);
		int posicion = 0;
		if (comboBoxOpciones->Text == "Búsqueda Secuencial")
		{
			lblAd->Visible = false;
			lblHash->Visible = false;
			String^ respuesta;
			//
			Stopwatch Chrono;
			Chrono.Start();
			respuesta = nuevo->Busqueda_Secuencial(valorBus, separar, separar->Length);
			Chrono.Stop();
			//
			if (respuesta != "not")
			{
				lblRespuesta->Text = "El número se encontró en la posición: " + respuesta + " del arreglo.";
			}
			if (respuesta == "not")
			{
				lblRespuesta->Text = "El número no se encontró.";
			}
			lblTiempo->Text = Chrono.Elapsed.ToString();
		}
		if (comboBoxOpciones->Text == "Búsqueda Binaria")
		{
			lblAd->Visible = true;
			lblHash->Visible = false;
			//Primero se ordena el arreglo de forma ascendente
			nuevo->BubleSort(separar, separar->Length);
			//
			String^ respuesta;
			int otro = 0;
			//
			Stopwatch Chrono;
			Chrono.Start();
			respuesta = nuevo->Busqueda_Binaria(valorBus, otro, valor, separar);
			Chrono.Stop();
			//
			if (respuesta != "not")
			{
				lblRespuesta->Text = "El número se encontró en la posición: " + respuesta + " del arreglo.";
			}
			if (respuesta == "not")
			{
				lblRespuesta->Text = "El número no se encontró.";
			}
			lblTiempo->Text = Chrono.Elapsed.ToString();
			//Regresamor el vector desordenado por si se quiere volver a buscar con otro metodo
			for (int i = 0; i < separar->Length; i++)
			{
				separar[i] = separar1[i];
			}
			//
		}
		if (comboBoxOpciones->Text == "Búsqueda Hash")
		{
			lblHash->Visible = true;
			lblAd->Visible = false;
			array <int^>^ nuevoTabla  = gcnew array <int^>(separar->Length * separar->Length);
			for (int i = 0; i < nuevoTabla->Length; i++)
			{
				nuevoTabla[i] = nullptr;
			}
			String^ respuesta;
			for (int i = 0; i < separar->Length; i++)
			{
				String^ valor = separar[i]->ToString();
				int valorCon = Int32::Parse(valor);
				nuevo->Tabla_Hash(valorCon, separar->Length, nuevoTabla);
			}
			//Se termina de agregar a la Tabla_Hash los valores generados del arreglo; las colisines se tomaron en cuenta
			
			//
			Stopwatch Chrono;
			Chrono.Start();
			respuesta = nuevo->Busqueda_Hash(valorBus, separar->Length, nuevoTabla);
			Chrono.Stop();
			//
			if (respuesta != "not")
			{
				lblRespuesta->Text = "El número se encontró en la posición: " + respuesta + " de la Tabla Hash.";
			}
			if (respuesta == "not")
			{
				lblRespuesta->Text = "El número no se encontró.";
			}
			lblTiempo->Text = Chrono.Elapsed.ToString();
		}
		lblTemp->Visible = true;
		lblTiempo->Visible = true;
		btnReiniciar->Visible = true;
	}	
}
private: System::Void BtnReiniciar_Click(System::Object^ sender, System::EventArgs^ e) {
	checkBoxSi->Checked = false;
	checkBoxNo->Enabled = true;
	lblPregunta->Visible = false;
	checkBoxSi->Visible = false;
	checkBoxNo->Visible = false;
	lblBus->Visible = false;
	comboBoxOpciones->Visible = false;
	txtValorBuscar->Visible = false;
	btnBuscar->Visible = false;
	lblRespuesta->Visible = false;
	btnReiniciar->Visible = false;
	lblTemp->Visible = false;
	lblTiempo->Visible = false;
	txtCantidad->ReadOnly = false;

	txtValorBuscar->Text = "";
	lblTiempo->Text = "...";
	lblRespuesta->Text = "...";
}
	    //Final de procedimientos.
};
}