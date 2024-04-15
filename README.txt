Inspeccione desde git bash o la terminal de Windows (PowerShell) la carpeta donde
inicializó el repositorio:
	● ¿Puede ver el archivo tp2_1_2.c? ¿Por qué?

No puedo ver el archivo tp2_1_2.c ya que este fue creado en otra rama del proyecto



	● En la línea principal agregue un nuevo archivo que se llame Respuestas.txt y
	realice un commit para agregar este archivo al repositorio.
	● vuelva a ejecutar el comando gitk --all ¿Qué diferencias nota?
		
		Ahora volvi a mi rama principal del proyecto y noto que hay 1 rama mas trabajando en paralelo


	● En el Branch main se va a combinar (merge) ambos repositorios. Para esto, utilice
	el siguiente comando:
	o git merge Opcion_2 -m "merge opcion 2" → combinamos
	master con Opcion_2
	● Luego utilice el comando gitk –all para ver los cambios, ¿Qué nota?

		Ahora noto que la rama Opcion_2 se unifico (merge) con la rama main para volver a ser una sola rama.
