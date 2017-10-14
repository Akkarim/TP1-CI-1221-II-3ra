# TP1-CI-1221-II
Tarea Programada de ED

Etapa	2.	Fecha	de	entrega:	lunes	2	de	octubre	de	2017,	hora	límite	11:30	p.m.	
-Implementar	el	modelo	Cola	utilizando	la	estructura	de	datos:	
• Arreglo	Circular		
-Implementar	el	modelo	Árbol	n-ario	tal	que	SÍ	importa	el	orden	entre	los	hijos	de	un	nodo	utilizando	las	estructuras	de	datos:		
• Arreglo	con	señalador	al	padre		
• Lista	de	Hijos	por	lista	simplemente	enlazada	(lista	principal)	y	lista	simplemente	enlazada	(sublistas)	
• Hijo	Más	Izquierdo-Hermano	Derecho	por	punteros.	
• Hijo	Más	Izquierdo-Hermano	Derecho	por	punteros,	tal	que	el	último	hijo	de	un	nodo	apunta	a	su	padre	
• Hijo	Más	Izquierdo-Hermano	Derecho	por	punteros,	con	puntero	al	padre	y	al	hermano	izquierdo.	
-Para	los	2	modelos	se	puede	usar	un	tipo	elemento	de	datos	simple,	por	ejemplo:	char,	integer	o	hilera.	
-Hacer	un	programa	de	prueba	que	permita	verificar	que	las	implementaciones	de	todas	las	estructuras	de	datos	son	correctas.	El	programa	de	prueba	debe	mostrar	un	menú	que	permita	al	usuario	utilizar	los	diferentes	operadores	básicos	de	cada	modelo.	Obviamente	deben	incluirse	algunos	algoritmos	sencillos	que	permitan	generar	una	interfaz	adecuada	para	que	dicha	prueba	se	pueda	realizar.	Considere,	por	ejemplo,	que	el	usuario	del	árbol	trabajará	con	etiquetas	y	no	con	nodos	y	por	lo	tanto	usted	deberá	“traducir”	etiquetas	a	nodos	y	viceversa.		
-El	programa	de	prueba	permitirá	usar	los	2	modelos	implementados.	
-En	el	caso	del	modelo	Árbol,	el	programa	de	prueba	“escogerá”	la	estructura	de	datos	mediante	la	cláusula	“include”,	lo	cual	generará	cinco	códigos	ejecutables	diferentes	(uno	por	cada	estructura	de	datos	usada	para	implementar	al	Árbol)		
-Documentación:	Partes	4.2,	5,	6,	8	y	9	

Etapa	3.	Fecha	de	entrega:	miércoles	18	de	octubre	de	2017,	hora	límite	11:30	p.m.	 

-Especificar	los	siguientes	algoritmos	para	el	modelo	Árbol	tal	que	SÍ	importa	el	orden	entre	los	hijos	de	un	nodo.	Para	cada	algoritmo	debe	incluir:	nombre,	parámetros	con	sus	tipos	y	las	cláusulas	Efecto	(claro,	completo	y	conciso),	Requiere	y	Modifica.
1. Averiguar	cuál	es	el	hermano	izquierdo	del	nodo	n.		
2. Averiguar	si	el	árbol	tiene	etiquetas	repetidas.		
3. Averiguar	cuántos	niveles	tiene	el	árbol	haciendo	un	recorrido	por	niveles.	
4. Averiguar	cuántos	niveles	tiene	el	árbol	haciendo	un	recorrido	en	pre-orden.		
5. Averiguar	la	profundidad	del	nodo	n	(distancia	que	hay	desde	el	nodo	n	hasta	la	raíz).		
6. Listar	las	etiquetas	del	i-ésimo	nivel	del	árbol.		
7. Listar	las	etiquetas	de	los	hijos	del	nodo	n.		
8. Borrar	el	sub-árbol	que	se	genera	a	partir	del	nodo	n.		
9. Copiar	un	árbol.	
10. Averiguar	si	dos	árboles	son	iguales.		
11. Listar	el	árbol	en	pre-orden.	
12. Listar	el	árbol	en	post-orden.	
13. Listar	el	árbol	por	niveles	(requiere	el	uso	del	modelo	Cola).	
14. Buscar	una	etiqueta	y	devolver	el	nodo	correspondiente.	Puede	suponer	que	no	hay	etiquetas	repetidas.		Si	no	encuentra	la	etiqueta	devuelve	nodo_nulo.	
-Implementar	los	algoritmos	para	el	modelo	Árbol	n-ario	tal	que	SÍ	importa	el	orden	entre	los	hijos	de	un	nodo.	Para	realizar	esta	implementación	debe	usar	los	operadores	básicos	del	modelo	y	por	
lo	tanto	la	implementación	será	independiente	de	la	representación	del	árbol.	Debido	a	que	la	Cola		se	usará	como	modelo	auxiliar,	su	tipo	elemento	de	datos	debe	ser	de	tipo	Nodo.	
-Hacer	un	programa	de	prueba	de	los	algoritmos	implementados.	Este	programa,	además,	debe	permitir	usar	los	operadores	básicos	del	árbol.		
Documentación:	Partes	4.3,	5,	6,	8	y	9	


Etapa	4.	Fecha	de	entrega:	miércoles		25	de	octubre	de	2017,	hora	límite	11:30	p.m.	 
-Hacer	un	análisis	empírico	(tiempo	y	espacio	real)	de	la	complejidad	computacional	de	las	estructuras	de	datos,	operadores	básicos	y	algoritmos	implementados	en	esta	tarea.	Para	ello	deberá	hacer	cálculos	de	tiempo	real	de	ejecución	de	los	diferentes	operadores	y	algoritmos,	para	diferentes	tamaños	de	n	y	para	diferentes	tipos	de	Árboles	(diferentes	alturas	y	anchuras).	Dichos	cálculos	deberán	ser	mostrados	en	tablas	y	gráficos.		
-Para	llevar	a	cabo	este	análisis	NO	es	necesario	que	se	incluyan	todos	los	operadores	básicos	y	todos	los	algoritmos.	Se	deberá	analizar	de	manera	completa	las	5	estructuras	de	datos	usadas	para	implementar	al	Árbol,	al	menos	2	operadores	básicos	y	6	algoritmos,	escogidos	de	tal	manera	que	los	mismos	representen	situaciones	interesantes	de	análisis	comparativo.		
-Tome	en	cuenta	que	para	este	tipo	de	análisis	tendrá	sentido	hacer	cálculos	de	tiempo	promedio	de	ejecución.	
	-Debido	a	que	deberá	trabajar	con	n’s	suficientemente	grandes,	deberá	hacer	la	creación	de	los	árboles	de	manera	automática	y	en	el	caso	del	cálculo	de	los	tiempos	promedio	deberá	generar	automáticamente	el	llamado	a	los	operadores	o	algoritmos.		
-Comparar	los	cálculos	reales	con	los	teóricos.	
	-Incluir	una	sección	de	conclusiones	sobre	la	eficiencia	de	cada	estructura	de	datos.		
-Tomar	en	cuenta	que	los	alcances	de	este	análisis	estarán	limitados	por	la	el	tipo	de	máquina	a	utilizar.		
Documentación:	Parte	7		
Notas	importantes:		
-La	tarea	se	puede	realizar	en	grupos	de	3	personas.		
-Se	debe	usar	C++.		
-Cada	grupo	es	responsable	de	mantener	respaldos	de	todos	los	archivos	creados	para	el	cumplimiento	de	esta	tarea.	
	-Los	archivos	con	los	códigos	fuente	y	la	documentación	correspondiente	a	cada	etapa	deben	subirse	a	la	plataforma	a	más	tardar	a	las	11:30	p.m	del	día	de	entrega	estipulado	en	este	enunciado	y	se	deben	seguir	los	lineamientos	especificados	en		mediación	virtual.	
	-Por	ningún	motivo	se	recibirá	la	tarea	por	otro	medio	o	en	otra	fecha	u	hora.		
-Los	archivos	entregados	deberán	estar	identificados	con	los	nombres	de	los	autores,	tanto	en	el	nombre	de	archivos	y	carpetas,	como	dentro	del	código	fuente	y	documentación.	Tomar	en	cuenta	las	especificaciones	dadas	por	los	asistentes.		
-La	organización	de	los	archivos	fuente	debe	ser	tal	que	su	compilación	para	probar	las	diferentes	estructuras	de	datos	sea	fácil	e	inmediata	(solo	debe	ser	necesario	poner	y	quitar	signos	de	comentario.	
	-Las	fechas	y	hora	de	entrega	deben	ser	respetadas	por	todos	los	estudiantes.	
















