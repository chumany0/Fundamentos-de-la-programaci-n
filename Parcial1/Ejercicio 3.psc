Algoritmo sin_titulo
	Escribir "Inserte su salario"
	Leer salario
	Si salario <= 1000  Entonces
		Escribir "se le descontara el 10%"
		salario_descuento <- salario*0.1
		salario <- salario- salario_descuento
		Escribir "Se le desconto: " salario_descuento
		Escribir "Su salario neto es: " salario
	SiNo
		si salario >= 1000
			si salario <= 2000
				Escribir "se le descontara el 5%"
				salario_descuento <- salario*0.05
				salario <- salario- salario_descuento
				Escribir "Se le desconto: " salario_descuento
				Escribir "Su salario neto es: " salario
			sino 
				si salario > 2000
					Escribir "se le descontara el 3%"
					salario_descuento <- salario*0.03
					salario <- salario- salario_descuento
					Escribir "Se le desconto: " salario_descuento
					Escribir "Su salario neto es: " salario
				FinSi
			FinSi
		FinSi
	Fin Si
FinAlgoritmo
