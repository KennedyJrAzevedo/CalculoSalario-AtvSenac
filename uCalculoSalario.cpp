//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uCalculoSalario.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAtividade* Atividade;
//---------------------------------------------------------------------------
__fastcall TAtividade::TAtividade(TComponent* Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------


void __fastcall TAtividade::Button6Click(TObject* Sender)
{
    double vsoma;
    vsoma = StrToFloat(Edit3->Text) + StrToFloat(Edit4->Text);
    Memo1->Lines->Clear();
    Memo1->Lines->Add("Salário + ticket: " + FormatFloat("0.00", vsoma)+ " R$");
}
//---------------------------------------------------------------------------

void __fastcall TAtividade::Button7Click(TObject* Sender)
{
    double valorseguro;
    valorseguro = (StrToFloat(Edit3->Text) * StrToFloat(Edit5->Text)) / 100;
    Memo1->Lines->Add("Valor do Seguro:" + FormatFloat("0.00", valorseguro)+ " R$");
}
//---------------------------------------------------------------------------

void __fastcall TAtividade::Button8Click(TObject* Sender)
{
    double valorhora, valorhoraextra;
	valorhora = StrToFloat(Edit3->Text) / 220;
	valorhoraextra = StrToFloat(Edit6->Text) * valorhora;
    Memo1->Lines->Add(
		"Valor da hora extra     :" + FormatFloat("0.00", valorhoraextra)+ " R$");
    Memo1->Lines->Add(
		"Valor da hora trabalhada:" + FormatFloat("0.00", valorhora)+ " R$");

}
//---------------------------------------------------------------------------

void __fastcall TAtividade::Button9Click(TObject* Sender)
{
    double valorinss;
    if (StrToFloat(Edit3->Text) <= 1045) {
        valorinss = StrToFloat(Edit3->Text) * 0.075;
    } else {
        valorinss = StrToFloat(Edit3->Text) * 0.1;
    }
    Memo1->Lines->Add("Valor do INSS:" + FormatFloat("0.00", valorinss)+ " R$");
}
//---------------------------------------------------------------------------

void __fastcall TAtividade::Button10Click(TObject* Sender)
{
    double vticket, valorseguro, valorhora, valorhoraextra, valorinss, vsalario;
    double vprovento, vdesconto, vliquido;

    // Exibe o Salário e soma proventos
    Memo1->Lines->Clear();
    Memo1->Lines->Add("** PROVENTOS **");
    vsalario = StrToFloat(Edit3->Text);
    Memo1->Lines->Add("Salário        :" + FormatFloat("0.00", vsalario)+ " R$");

    // Calculo do ticket
    vticket = StrToFloat(Edit4->Text);
    Memo1->Lines->Add("Valor do ticket:" + FormatFloat("0.00", vticket)+ " R$");

    // calculo das horas extras
    valorhora = StrToFloat(Edit3->Text) / 220;
    valorhoraextra = StrToFloat(Edit6->Text) * valorhora;
    Memo1->Lines->Add(
        "Valor da hora extra     :" + FormatFloat("0.00", valorhoraextra)+ " R$");
    vprovento = vsalario + vticket + valorhoraextra;
    Memo1->Lines->Add("TOTAL PROVENTOS:" + FormatFloat("0.00", vprovento)+ " R$");
    Memo1->Lines->Add(" ");

    // DESCONTOS
    Memo1->Lines->Add("** DESCONTOS **");
    // Calculo do seguro
    valorseguro = StrToFloat(Edit3->Text) * StrToFloat(Edit5->Text) / 100;
    Memo1->Lines->Add("Valor do Seguro:" + FormatFloat("0.00", valorseguro)+ " R$");

    // Calculo do inss
    if (StrToFloat(Edit3->Text) <= 1045) {
        valorinss = StrToFloat(Edit3->Text) * 0.075;
    } else {
        valorinss = StrToFloat(Edit3->Text) * 0.1;
    }
    Memo1->Lines->Add("Valor do INSS:" + FormatFloat("0.00", valorinss)+ " R$");
    vdesconto = valorseguro + valorinss;
    Memo1->Lines->Add("TOTAL DESCONTOS:" + FormatFloat("0.00", vdesconto)+ " R$");
    vliquido = vprovento - vdesconto;
    Memo1->Lines->Add("SALÁRIO LÍQUIDO:" + FormatFloat("0.00", vliquido)+ " R$");
}
//---------------------------------------------------------------------------

