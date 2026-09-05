Algoritmo sin_titulo
	Escribir "Introduce 2 numeros"
	leer num1
	leer num2
	si num1 = num2 Entonces
		num <- num1*num2
		Escribir num
	sino 
		si num1 > num2
			num <- num1-num2
			Escribir num
		SiNo
			num <- num1+num2
			Escribir num
		FinSi
	FinSi
	
FinAlgoritmo
