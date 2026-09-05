Algoritmo sin_titulo
	Escribir "numero de notas"
	Leer numero_notas
	// Esto tambien lo agrege para ponerle algo mas al codigo
	Mientras numero_notas <= 0 Hacer
        Escribir "No puede ser 0"
        Leer numero_notas
    FinMientras
	
	m <- 0
	Mientras m < numero_notas Hacer
		calificacion <- Aleatorio(5,10)
		total_calificaion <- total_calificaion + calificacion
		m<-m+1
		Si calificacion >= 6 Entonces
			Escribir "esta aprobado " calificacion
			numero_aprovados <- numero_aprovados+1
			promedio_aproados <- promedio_aproados + calificacion
		SiNo
			Escribir "esta reprovado " calificacion
			numero_reproados<- numero_reproados+1
			promedio_reprobado <-  promedio_reprobado + calificacion
		Fin Si
	Fin Mientras
	promedio_total <- total_calificaion / numero_notas
	
	// Esto lo agrege despues de darme cuenta que si nadie reprueba o aprueva
	// se vuelve una divicion entre 0
	si numero_reproados = 0 Entonces
		Escribir "nadie reprobo YEEIII"
	SiNo
		Escribir "Promedio de reprobados " promedio_reprobado/numero_reproados
	FinSi
	si numero_aprovados = 0 Entonces
		Escribir "todos son idiotas nadie aprovo"
	SiNo
		Escribir  "promedio de aprovados " promedio_aproados/numero_aprovados
	FinSi
	
	Escribir "promedio total " promedio_total
	
FinAlgoritmo
