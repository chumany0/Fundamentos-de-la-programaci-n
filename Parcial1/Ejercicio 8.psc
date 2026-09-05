Algoritmo sin_titulo
    Escribir "Calificaciones del alumno 1"
    Escribir "Primer parcial:"
    Leer parcial1
    Escribir "Segundo parcial:"
    Leer parcial2
    Escribir "Tercer parcial:"
    Leer parcial3
	
    promedio1 <- CalcularPromedio(parcial1, parcial2, parcial3)
	
    Escribir "El promedio del alumno 1 es: ", promedio1
	
	
    Escribir "Calificaciones del alumno 2"
    Escribir "Primer parcial:"
    Leer parcial1
    Escribir "Segundo parcial:"
    Leer parcial2
    Escribir "Tercer parcial:"
    Leer parcial3
	
    promedio2 <- CalcularPromedio(parcial1, parcial2, parcial3)
	
    Escribir "El promedio del alumno 2 es: ", promedio2
	
FinAlgoritmo


Funcion promedio <- CalcularPromedio(cal1, cal2, cal3)
    promedio <- (cal1 + cal2 + cal3) / 3
FinFuncion