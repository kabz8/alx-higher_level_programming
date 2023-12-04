#include <python.h>

/**
 * print_python_list_info - Print info
 * @p: list
 */

void print_python_list_info(PyObject *p)
{
	int size, alloc, i;
	PyObject *obj;

	size =Py_SIZE(p);
	alloc = ((PyListobject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] allocated = %d\n", alloc);

	for (i = 0; i < size; i++)
	{
		printf("Element %d: ", i);

		obj = PyList_GetItem(p, i);
		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
}
