
/** \brief  pedir un numero para que responda
 *
 * \param char[] el mensaje hacer mostrar
 * \return int el numero ingresado por el usuario
 *
 */
int pedirEntero(char[]);

/** \brief calcula cuentas: sumar/restar/multiplicar.
 *
 * \param int entero a realiizar cuenta
 * \param int entero por el cual se hace la cuenta
 * \return int resultado del ejercicio
 *
 */
int cuenta(int,int);

/** \brief calcula cuentas: sumar/restar/multiplicar con la respuesta escrita
 *
 *
 * \param int entero a realiizar cuenta
 * \param int entero por el cual se hace la cuenta
 * \return void resultado del ejercicio con su printf correspondiente
 *
 */
void cuentaYResultado(int,int);

/** \brief calcula la division entre dos numeros
 *
 * \param int numero a dividir
 * \param int divisor
 * \return float resultado de la division
 *
 */
float cuentaDivision(int,int);

/** \brief calcula la division entre dos numeros y muestra el resultado
 *
 * \param int numero a dividir
 * \param int divisor
 * \return void resultado de la division con su respectivo printf
 *
 */
void cuentaDivisionYResultado(int,int);

/** \brief validacion de notas que esten entre 0 y 10
 *
 * \param void
 * \return int numero ingresado ya validado
 *
 */
int pedirNota(void);

/** \brief avisa si el ente esta entre las dos variables
 *
 * \param int valor minimo
 * \param int valor del entero
 * \return int retorna 1 se aprobar 0 si no aprobo
 *
 */
int aprovarMateria(int, int);

/** \brief saca los factoriales de un entero
 *
 * \param int entero a factoriar
 * \return int todos los factoriales de ese numero
 *
 */
int factorial(int);

/** \brief
 *
 * \param [] int vector a cargar
 * \param int tamanio del vector
 * \return void
 *
 */
void cargarVector(int [],int);

/** \brief muestra todos los valores dentro de un vector
 *
 * \param int[] vector a mostrar
 * \param int tamanio del vector
 * \return void
 *
 */
void mostrarNumeros(int[],int);

/** \brief busca el entero mas grande
 *
 * \param [] int nombre del vector
 * \param int tamanio del vector
 * \return int valor mas alto
 *
 */
int buscarMaximo(int [],int);

/** \brief busca el valor que se le pida
 *
 * \param [] int nombre del vector
 * \param int tanio del vector
 * \param int valor a buscar
 * \return int indice donde se encontro el valor buscado
 *
 */
int buscarValores(int [],int ,int);

/** \brief ordena un vector de menor a mayor
 *
 * \param int[] nombre del vector
 * \param int tamanio del vector
 * \return void
 *
 */
void ordenarVector(int[], int);

/** \brief menu interacivo
 *
 * \param void
 * \return void
 *
 */
void menuDeOpciones(void)


