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
				Escribir "se le descontara el 10%"
				Escribir "y"
				Escribir "se le descontara el 5%"
				
				salario<-salario-1000
				salario_descuento <- salario*0.05
				salario <- salario- salario_descuento
				Escribir "Se le desconto: " salario_descuento + 100
				Escribir "Su salario neto es: " salario +900
			sino 
				si salario > 2000
					Escribir "se le descontara el 10%"
					Escribir "y"
					Escribir "se le descontara el 5%"
					Escribir "y"
					Escribir "se le descontara el 3%"
					
					salario<-salario-2000
					salario_descuento <- salario*0.03
					salario <- salario- salario_descuento
					Escribir "Se le desconto: " salario_descuento + 150
					Escribir "Su salario neto es: " salario + 1850
				FinSi
			FinSi
		FinSi
	Fin Si
FinAlgoritmo
