PROGRAM QUIZ0Kalkulator;
uses crt;
var
   a,b : integer;
   c : real;
   hitung : char;

Begin
     clrscr;
     textcolor(green);
     writeln('--------');
     writeln('Masukkan Operand Pertama : '); readln(a);
     writeln('Masukkan Operator(+,-,/,*)'); readln(hitung);
     writeln('Masukkan Operand Kedua : '); readln(b);
     writeln('--------');

     case hitung of
          '+' : c :=a+b;
          '-' : c :=a-b;
          '/' : c :=a/b;
          '*' : c :=a*b;
     End;
writeln('Hasilnya = ', c:0:2);
writeln('--------');
readln;
End.

