Algoritmo sin_titulo
	m<-0
	idk <- 0
	Mientras pedro <> "salir" Hacer
		Mientras idk=0  Hacer
			Escribir "Inserte salir para salir del programa"
			Escribir "de lo contrario precione enter"
			idk<- idk+1
		Fin Mientras
		parcial1<- Aleatorio(5,10)
		parcial2<- Aleatorio(5,10)
		parcial3<- Aleatorio(5,10)
		promedio_alumno <- (parcial1+parcial2+parcial3)/3
		promedio_total <- promedio_total+promedio_alumno
		Escribir "primer parcial: " parcial1
		Escribir "segundo parcial: " parcial2
		Escribir "tercer parcial: " parcial3
		Escribir "El promedio de este alumno fue: " promedio_alumno

		m<-m+1
		
		Leer pedro
	FinMientras
	
	Escribir "El promedio total fue: " promedio_total/m
FinAlgoritmo
