Algoritmo sin_titulo
	Escribir "Escriba que perimetro quiere calcular"
	Escribir "cuadrado, triangulo equilatero, circulo"
	Leer tipo_a_calcular
	Segun tipo_a_calcular Hacer
		"cuadrado":
			Escribir "Inserte un lado del cuadrado"
			leer medida1
			perimetro_cuadrado <- medida1*4
			Escribir "tu perimetro es de: " perimetro_cuadrado
			
		"triangulo equilatero":
			
			Escribir "Inserte un lado del equilatero"
			leer lado1
			perimetro_equilatero <- lado1*3
			Escribir "tu perimetro es de: " perimetro_equilatero
		"circulo": 
			Escribir "Tiendes el diametro o el radio?"
			Leer diaOrad
			Segun diaOrad Hacer
				"diametro":
					Escribir "inserta el diametro"
					Leer diametro
					perimetro_circulo <- PI*diametro
					Escribir "tu perimetro es de: " perimetro_circulo
				"radio":
					Escribir "Inserta el radio"
					Leer radio
					perimetro_circulo <- 2*PI*radio
					Escribir "tu perimetro es de: " perimetro_circulo
				De Otro Modo:
					escribir "lo escribiste mal we"
			Fin Segun
			
		De Otro Modo:
			Escribir "error esa opcion no esta contemplada"
			Escribir "tal vez lo escribiste mal"
	Fin Segun
FinAlgoritmo
