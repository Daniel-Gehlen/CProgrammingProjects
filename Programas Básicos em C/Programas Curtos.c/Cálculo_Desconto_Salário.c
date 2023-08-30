// Cálculo: desconto salário

int main() {
		float salario, inss, ir, sal_liquido;
	
	printf ("Digite seu salário bruto: ");
	scanf ("%f", &salario);
	
	if(salario <= 1993.72) {
		inss = salario * 0.08;
	}
	    else if (salario >= 1993.73 && salario <= 2822.50);
	    {
		inss = salario * 0.09;
	    }
	
	sal_liquido = (salario - inss) - ir;
	
	printf("\n Desconto INSS %f\n", inss);
	
	printf("\n Salario liquido %2.f\n", sal_liquido);
	
	return 0;
}