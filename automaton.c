//Fernando Bontorin, 31568343
//Guilherme, 31324101

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _IGUAL_ 1001
#define _SOMAR_ 1002
#define _SUBTRAIR_ 1003
#define _MULTIPLICAR_ 1004
#define _DOIS_PONTOS_ 1005
#define _ATRIBUIR_ 1006
#define _MAIOR_ 1007
#define _MENOR_ 1008
#define _MAIOR_IGUAL_ 1009
#define _MENOR_IGUAL_ 1010
#define _MENOR_MAIOR_ 1011
#define _NUM_ 1012
#define _DIFERENTE_ 1013
#define _DIVISAO_ 1014
#define _COMENTARIO_ 1015
#define _PROGRAM_ 1016
#define _PROCEDURE_ 1017
#define _BEGIN_ 1018
#define _BOOL_ 1019
#define _IF_ 1020
#define _INT_ 1021
#define _DO_ 1022
#define _WRITE_ 1023
#define _WHILE_ 1024
#define _END_ 1025
#define _ELSE_ 1026
#define _OR_ 1027
#define _FALSE_ 1028
#define _AND_ 1029
#define _NOT_ 1030
#define _VAR_ 1031
#define _THEN_ 1032
#define _TRUE_ 1033
#define _ABRE_PARENTESIS_ 1034
#define _FECHA_PARENTESIS_ 1035
#define _VIRGULA_ 1036
#define _PONTO_E_VIRGULA_ 1037

int scanner(char *palavra);
void writeLex(int def, int inicio, int final);

char *palavra = "if 2345 true (  /* ** x & */  x & ## >=  ";

int main(){
	if(scanner(palavra)){
		printf("SUCESSO!! - output.txt");
	}else{
		printf("ERRADO!! - output.txt");
	}
	return 0;
}

int scanner(char *palavra){
	char c;
	int k = -1, i;
	
	q0: c = palavra[++k];
	i = k;
	if(strlen(palavra)-1<=k){
		return 1;
	}
	switch(c){
		case ' ':
			goto q0;
		break;
		case '=':
			goto q87;
		break;
		case '+':
			goto q84;
		break;
		case '-':
			goto q25;
		break;
		case '*':
			goto q85;
		break;
		case ':':
			goto q23;
		break;
		case '>':
			goto q22;
		break;
		case '<':
			goto q21;
		break;
		case '0':
			goto q7;
		break;
		case '1':
			goto q7;
		break;
		case '2':
			goto q7;
		break;
		case '3':
			goto q7;
		break;
		case '4':
			goto q7;
		break;
		case '5':
			goto q7;
		break;
		case '6':
			goto q7;
		break;
		case '7':
			goto q7;
		break;
		case '8':
			goto q7;
		break;
		case '9':
			goto q7;
		break;
		case '/':
			goto q1;
		break;
		case 'p':
			goto q6;
		break;
		case 'b':
			goto q8;
		break;
		case 'i':
			goto q30;
		break;
		case 'd':
			goto q34;
		break;
		case 'w':
			goto q36;
		break;
		case 'e':
			goto q45;
		break;
		case 'o':
			goto q51;
		break;
		case 'f':
			goto q53;
		break;
		case 'a':
			goto q58;
		break;
		case 'n':
			goto q61;
		break;
		case 'v':
			goto q64;
		break;
		case 't':
			goto q67;
		break;
		case '(':
			goto q78;
		break;
		case ')':
			goto q79;
		break;
		case ',':
			goto q80;
		break;
		case ';':
			goto q83;
		break;
		default:
			return 0;
	}
	
	q87: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_IGUAL_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q84: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_SOMAR_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q25: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_SUBTRAIR_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q85: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_MULTIPLICAR_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q23: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_DOIS_PONTOS_, i, k--);
			goto q0;
		break;
		case '=':
			goto q77;
		break;
		default:
			return 0;
	}
	
	q77: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_ATRIBUIR_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q22: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_MAIOR_, i, k--);
			goto q0;
		break;
		case '=':
			goto q82;
		break;
		default:
			return 0;
	}
	
	q82: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_MAIOR_IGUAL_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q21: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_MENOR_, i, k--);
			goto q0;
		break;
		case '=':
			goto q81;
		break;
		case '>':
			goto q24;
		break;
		default:
			return 0;
	}
	
	q81: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_MENOR_IGUAL_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q24: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_MENOR_MAIOR_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q7: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_NUM_, i, k--);
			goto q0;
		break;
		case '0':
			goto q7;
		break;
		case '1':
			goto q7;
		break;
		case '2':
			goto q7;
		break;
		case '3':
			goto q7;
		break;
		case '4':
			goto q7;
		break;
		case '5':
			goto q7;
		break;
		case '6':
			goto q7;
		break;
		case '7':
			goto q7;
		break;
		case '8':
			goto q7;
		break;
		case '9':
			goto q7;
		break;
		default:
			return 0;
	}
	
	q1: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_DIVISAO_, i, k--);
			goto q0;
		break;
		case '*':
			goto q2;
		break;
		default:
			return 0;
	}
	
	q2: c = palavra[++k];
	switch(c){
		case '*':
			goto q3;
		break;
		default:
			return 0;
	}
	
	q3: c = palavra[++k];
	switch(c){
		case '/':
			goto q4;
		break;
		case '*':
			goto q3;
		break;
		default:
			goto q2;
	}
	
	q4: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_COMENTARIO_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q5: c = palavra[++k];
	switch(c){
		case '/':
			goto q0;
		break;
		default:
			goto q11;
	}
	
	q6: c = palavra[++k];
	switch(c){
		case 'r':
			goto q9;
		break;
		default:
			return 0;
	}
	
	q9: c = palavra[++k];
	switch(c){
		case 'o':
			goto q10;
		break;
		default:
			return 0;
	}
	
	q10: c = palavra[++k];
	switch(c){
		case 'g':
			goto q11;
		break;
		case 'c':
			goto q12;
		break;
		default:
			return 0;
	}
	
	q11: c = palavra[++k];
	switch(c){
		case 'r':
			goto q13;
		break;
		default:
			return 0;
	}
	
	q13: c = palavra[++k];
	switch(c){
		case 'a':
			goto q15;
		break;
		default:
			return 0;
	}
	
	q15: c = palavra[++k];
	switch(c){
		case 'm':
			goto q16;
		break;
		default:
			return 0;
	}
	
	q16: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_PROGRAM_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q12: c = palavra[++k];
	switch(c){
		case 'e':
			goto q14;
		break;
		default:
			return 0;
	}
	
	q14: c = palavra[++k];
	switch(c){
		case 'd':
			goto q17;
		break;
		default:
			return 0;
	}
	
	q17: c = palavra[++k];
	switch(c){
		case 'u':
			goto q18;
		break;
		default:
			return 0;
	}
	
	q18: c = palavra[++k];
	switch(c){
		case 'r':
			goto q19;
		break;
		default:
			return 0;
	}
	
	q19: c = palavra[++k];
	switch(c){
		case 'e':
			goto q20;
		break;
		default:
			return 0;
	}
	
	q20: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_PROCEDURE_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q8: c = palavra[++k];
	switch(c){
		case 'e':
			goto q26;
		break;
		case 'o':
			goto q74;
		break;
		default:
			return 0;
	}
	
	q26: c = palavra[++k];
	switch(c){
		case 'g':
			goto q27;
		break;
		default:
			return 0;
	}
	
	q27: c = palavra[++k];
	switch(c){
		case 'i':
			goto q28;
		break;
		default:
			return 0;
	}
	
	q28: c = palavra[++k];
	switch(c){
		case 'n':
			goto q29;
		break;
		default:
			return 0;
	}
	
	q29: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_BEGIN_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q74: c = palavra[++k];
	switch(c){
		case 'o':
			goto q75;
		break;
		default:
			return 0;
	}
	
	q75: c = palavra[++k];
	switch(c){
		case 'l':
			goto q76;
		break;
		default:
			return 0;
	}
	
	q76: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_BOOL_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q30: c = palavra[++k];
	switch(c){
		case 'f':
			goto q31;
		break;
		case 'n':
			goto q32;
		break;
		default:
			return 0;
	}
	
	q31: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_IF_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q32: c = palavra[++k];
	switch(c){
		case 't':
			goto q33;
		break;
		default:
			return 0;
	}
	
	q33: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_INT_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q34: c = palavra[++k];
	switch(c){
		case 'o':
			goto q35;
		break;
		default:
			return 0;
	}
	
	q35: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_DO_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q36: c = palavra[++k];
	switch(c){
		case 'r':
			goto q37;
		break;
		case 'h':
			goto q41;
		break;
		default:
			return 0;
	}
	
	q37: c = palavra[++k];
	switch(c){
		case 'i':
			goto q38;
		break;
		default:
			return 0;
	}
	
	q38: c = palavra[++k];
	switch(c){
		case 't':
			goto q39;
		break;
		default:
			return 0;
	}
	
	q39: c = palavra[++k];
	switch(c){
		case 'e':
			goto q40;
		break;
		default:
			return 0;
	}
	
	q40: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_WRITE_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q41: c = palavra[++k];
	switch(c){
		case 'i':
			goto q42;
		break;
		default:
			return 0;
	}
	
	q42: c = palavra[++k];
	switch(c){
		case 'l':
			goto q43;
		break;
		default:
			return 0;
	}
	
	q43: c = palavra[++k];
	switch(c){
		case 'e':
			goto q44;
		break;
		default:
			return 0;
	}
	
	q44: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_WHILE_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q45: c = palavra[++k];
	switch(c){
		case 'n':
			goto q46;
		break;
		case 'l':
			goto q48;
		break;
		default:
			return 0;
	}
	
	q46: c = palavra[++k];
	switch(c){
		case 'd':
			goto q47;
		break;
		default:
			return 0;
	}
	
	q47: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_END_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q48: c = palavra[++k];
	switch(c){
		case 's':
			goto q49;
		break;
		default:
			return 0;
	}
	
	q49: c = palavra[++k];
	switch(c){
		case 'e':
			goto q50;
		break;
		default:
			return 0;
	}
	
	q50: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_ELSE_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q51: c = palavra[++k];
	switch(c){
		case 'r':
			goto q52;
		break;
		default:
			return 0;
	}
	
	q52: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_OR_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q53: c = palavra[++k];
	switch(c){
		case 'a':
			goto q54;
		break;
		default:
			return 0;
	}
	
	q54: c = palavra[++k];
	switch(c){
		case 'l':
			goto q55;
		break;
		default:
			return 0;
	}
	
	q55: c = palavra[++k];
	switch(c){
		case 's':
			goto q56;
		break;
		default:
			return 0;
	}
	
	q56: c = palavra[++k];
	switch(c){
		case 'e':
			goto q57;
		break;
		default:
			return 0;
	}
	
	q57: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_FALSE_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q58: c = palavra[++k];
	switch(c){
		case 'n':
			goto q59;
		break;
		default:
			return 0;
	}
	
	q59: c = palavra[++k];
	switch(c){
		case 'd':
			goto q60;
		break;
		default:
			return 0;
	}
	
	q60: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_AND_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q61: c = palavra[++k];
	switch(c){
		case 'o':
			goto q62;
		break;
		default:
			return 0;
	}
	
	q62: c = palavra[++k];
	switch(c){
		case 't':
			goto q63;
		break;
		default:
			return 0;
	}
	
	q63: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_NOT_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q64: c = palavra[++k];
	switch(c){
		case 'a':
			goto q65;
		break;
		default:
			return 0;
	}
	
	q65: c = palavra[++k];
	switch(c){
		case 'r':
			goto q66;
		break;
		default:
			return 0;
	}
	
	q66: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_VAR_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q67: c = palavra[++k];
	switch(c){
		case 'h':
			goto q68;
		break;
		case 'r':
			goto q71;
		break;
		default:
			return 0;
	}
	
	q68: c = palavra[++k];
	switch(c){
		case 'e':
			goto q69;
		break;
		default:
			return 0;
	}
	
	q69: c = palavra[++k];
	switch(c){
		case 'n':
			goto q70;
		break;
		default:
			return 0;
	}
	
	q70: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_THEN_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q71: c = palavra[++k];
	switch(c){
		case 'u':
			goto q72;
		break;
		default:
			return 0;
	}
	
	q72: c = palavra[++k];
	switch(c){
		case 'e':
			goto q73;
		break;
		default:
			return 0;
	}
	
	q73: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_TRUE_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q78: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_ABRE_PARENTESIS_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q79: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_FECHA_PARENTESIS_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q80: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_VIRGULA_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	
	q83: c = palavra[++k];
	switch(c){
		case ' ':
			writeLex(_PONTO_E_VIRGULA_, i, k--);
			goto q0;
		break;
		default:
			return 0;
	}
	return 1;
}

void writeLex(int def, int inicio, int final){
	FILE *fp;
	fp = fopen("output.txt", "a");
	fprintf(fp, "\n");
	char s[128];
	for(int i = 0; i < final-inicio; i++)
	{
		s[i] = palavra[inicio+i];
	}
	
	switch(def){
		case 1001:
			fprintf(fp, "<IGUAL>");
		break;
		case 1002:
			fprintf(fp, "<SOMAR>");
		break;
		case 1003:
			fprintf(fp, "<SUBTRAIR>");
		break;
		case 1004:
			fprintf(fp, "<MULTIPLICAR>");
		break;
		case 1005:
			fprintf(fp, "<DOIS_PONTOS>");
		break;
		case 1006:
			fprintf(fp, "<ATRIBUIR>");
		break;
		case 1007:
			fprintf(fp, "<MAIOR>");
		break;
		case 1008:
			fprintf(fp, "<MENOR>");
		break;
		case 1009:
			fprintf(fp, "<MAIOR_IGUAL>");
		break;
		case 1010:
			fprintf(fp, "<MENOR_IGUAL>");
		break;
		case 1011:
			fprintf(fp, "<MENOR_MAIOR>");
		break;
		case 1012:
			fprintf(fp, "<NUM, %s>", s);
		break;
		case 1013:
			fprintf(fp, "<DIFERENTE>");
		break;
		case 1014:
			fprintf(fp, "<DIVISAO>");
		break;
		case 1015:
			fprintf(fp, "<COMENTARIO, \"%s\">", s);
		break;
		case 1016:
			fprintf(fp, "<PROGRAM>");
		break;
		case 1017:
			fprintf(fp, "<PROCEDURE>");
		break;
		case 1018:
			fprintf(fp, "<BEGIN>");
		break;
		case 1019:
			fprintf(fp, "<BOOL>");
		break;
		case 1020:
			fprintf(fp, "<IF>");
		break;
		case 1021:
			fprintf(fp, "<INT>");
		break;
		case 1022:
			fprintf(fp, "<DO>");
		break;
		case 1023:
			fprintf(fp, "<WRITE>");
		break;
		case 10224:
			fprintf(fp, "<WHILE>");
		break;
		case 1025:
			fprintf(fp, "<END>");
		break;
		case 1026:
			fprintf(fp, "<ELSE>");
		break;
		case 1027:
			fprintf(fp, "<OR>");
		break;
		case 1028:
			fprintf(fp, "<FALSE>");
		break;
		case 1029:
			fprintf(fp, "<AND>");
		break;
		case 1030:
			fprintf(fp, "<NOT>");
		break;
		case 1031:
			fprintf(fp, "<VAR>");
		break;
		case 1032:
			fprintf(fp, "<THEN>");
		break;
		case 1033:
			fprintf(fp, "<TRUE>");
		break;
		case 1034:
			fprintf(fp, "<ABRE_PARENTESIS>");
		break;
		case 1035:
			fprintf(fp, "<FECHA_PARENTESIS>");
		break;
		case 1036:
			fprintf(fp, "<VIRGULA>");
		break;
		case 1037:
			fprintf(fp, "<PONTO_E_VIRGULA>");
		break;
		default:
			fprintf(fp, "<ERRO LEXICO>");
	}
	
	fprintf(fp, "\n");
	fclose(fp);
}
