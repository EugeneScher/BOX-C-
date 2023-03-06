//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
// ������ ����� �������
double le(sPoint a1,sPoint a2)
{
 return sqrt((a1.x-a2.x)*(a1.x-a2.x) + (a1.y-a2.y)*(a1.y-a2.y) );
};
// ���������� �������  ---------------------------------------------------------
sPoint coord_vector(sPoint begin, sPoint end)
{
 sPoint v;
 v.x=end.x-begin.x;
 v.y=end.y-begin.y;
 return v;
}
// ������� ������������ --------------------------------------------------------
bool ortogonal_vectors(sPoint v1,sPoint v2)
{
 if ((v1.x*v2.x+v1.y*v2.y) == 0) return true;
 else return false;
}
// ������� ����������� ---------------------------------------------------------
bool collinear_vectors(sPoint v1,sPoint v2)
{
 if ((v1.x==0.0 && v2.x==0.0) ||(v1.y==0.0 && v2.y==0.0))
 {
  return true;
 }
 else
 {
  if (v2.x==0.0 || v2.y ==0.0) return false;
  else
  {
   if ( (v1.x/v2.x) == (v1.y/v2.y)) return true;
   else return false;
  }
 }
}
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Button1Click(TObject *Sender)
{

 sPoint A,B,C,D;
 // �������� ������
 A.x=Editax->Text.ToDouble(); A.y=Editay->Text.ToDouble();
 B.x=Editbx->Text.ToDouble(); B.y=Editby->Text.ToDouble();
 C.x=Editcx->Text.ToDouble(); C.y=Editcy->Text.ToDouble();
 D.x=Editdx->Text.ToDouble(); D.y=Editdy->Text.ToDouble();
 // ������� ������� 
 sPoint AB,BC,CD,AD;
 AB=coord_vector(A,B);
 BC=coord_vector(B,C);
 CD=coord_vector(C,D);
 AD=coord_vector(A,D);
 if (  //�������� �� ����-������
 (AB.x==0 && AB.y==0)||
 (BC.x==0 && BC.y==0)||
 (CD.x==0 && CD.y==0)||
 (AD.x==0 && AD.y==0))
 {
  ShowMessage("��������� ������ �� �������� �����������������");
  return;
 }
 // ����������� ���� ���������������
 if (collinear_vectors(AB,CD) && collinear_vectors(BC,AD) && ortogonal_vectors(AB,BC))
 ResultLabel->Caption=" ������������� ";
 else
 if (collinear_vectors(AB,CD) && collinear_vectors(BC,AD) )
 ResultLabel->Caption=" �������������� ";
 else
 if (collinear_vectors(AB,CD) || collinear_vectors(BC,AD) )
 ResultLabel->Caption=" �������� ";
 else
 ResultLabel->Caption=" ��������������� ����� ���� ";
 
}
//---------------------------------------------------------------------------


