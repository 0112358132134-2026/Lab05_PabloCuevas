#pragma once
#include <iostream>
#include <stdlib.h>
using namespace System;
ref class Metodos_Busqueda
{
public:
	//Búsqueda Secuencial: Busca en el arreglo generado al principio.
	String^ Busqueda_Secuencial(int datoBuscar, array <int^>^ A, int tamaño)
	{
		String^ posicion = "";
		bool encontrado = false;
		for (int i = 0; i < tamaño; i++)
		{
			if (A[i]->ToString() == datoBuscar.ToString())
			{
				posicion += i + ", ";
				encontrado = true;
			}
		}
		if (encontrado == false)
		{
			posicion = "not";
		}
		return posicion;
	}
	//Búsqueda Binaria: Primero ordena el arreglo y luego busca en el arreglo ordenado.
	String^ Busqueda_Binaria(int datoBuscar, int _inf, int _sup, array <int^>^ A)
	{
		int inf = _inf, sup = _sup, mitad;
		String^ posicion = "";
		String^ respuesta = "";
		bool encontrado = false;
		int contador = 0;
		while (inf <= sup || contador < ((A->Length)* (A->Length)))
		{
			mitad = (inf + sup) / 2;
			//
			String^ valor1 = A[mitad]->ToString();
			int valor2 = Int32::Parse(valor1);
			//
			if (A[mitad]->ToString() == datoBuscar.ToString())
			{
				encontrado = true;
				break;
			}
			if (valor2 > datoBuscar)
			{
				sup = mitad;
				mitad = (inf + sup) / 2;
			}
			if (valor2 < datoBuscar)
			{
				inf = mitad;
				mitad = (inf + sup) / 2;
				contador++;
			}
		}
		if (encontrado == true)
		{
			posicion += mitad + ", ";
		}
		else
		{
			if (encontrado == false)
			{
				posicion = "not";
			}
		}
		return posicion;
	}
	void BubleSort(array <int^>^ arr, int n)
	{
		int aux, i, j;
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				//
				String^ valor1 = arr[i]->ToString();
				int valor11 = Int32::Parse(valor1);
				String^ valor2 = arr[j]->ToString();
				int valor22 = Int32::Parse(valor2);
				//
				if (valor11 > valor22)
				{
					aux = valor11;
					arr[i] = arr[j];
					arr[j] = aux;
				}
			}
		}
	}
	void QuickSort(array <int^>^ arr, int izq, int der)
	{
		int i = izq, j = der, tmp;
		//
		String^ p = arr[(izq + der) / 2]->ToString();
		int p1 = Int32::Parse(p);
		//
		while (i <= j)
		{
			//
			String^ valor1 = arr[i]->ToString();
			int valor11 = Int32::Parse(valor1);
			String^ valor2 = arr[j]->ToString();
			int valor22 = Int32::Parse(valor2);
			//
			while (valor11 < p1) i++;
			while (valor22 > p1) j--;
			if (i <= j)
			{
				tmp = valor11;
				arr[i] = arr[j];
				arr[j] = tmp;
				i++; j--;
			}
		}
		if (izq < j)
		{
			QuickSort(arr, izq, j);
		}
		if (i < der)
		{
			QuickSort(arr, i, der);
		}
	}
	//Búsqueda Hashing: Mete los valores del arreglo a otro utilizando una función Hash, y luego busca en este nuevo arreglo.
	void Tabla_Hash(int key, int tamaño, array <int^>^ Destino)
	{
		int indice = 0;
		indice = key % tamaño;
		bool insertado = false;
		//Colision secuencial
		while (insertado == false)
		{
			if (Destino[indice] ==  nullptr)
			{
				Destino[indice] = key;
				insertado = true;
			}
			else
			{
				indice += 1;
			}
		}
	}
	String^ Busqueda_Hash(int key, int tamaño, array <int^>^ arr)
	{
		int indice = 0;
		String^ posicion = "";
		indice = key % tamaño;
		bool encontrado = false;
		//Colicion secuencial
		while ((encontrado == false) && (indice < arr->Length))
		{
			if (arr[indice] != nullptr)
			{
				if (arr[indice]->ToString() == key.ToString())
				{
					posicion += indice + ", ";
					encontrado = true;
				}			
				else
				{
					indice += 1;
					encontrado = false;
				}
			}
			else
			{
				indice += 1;
				encontrado = false;
			}
		}
		if (encontrado == true)
		{
			return posicion;
		}
		else
		{
			if (encontrado == false)
			{
				return "not";
			}
		}
	}
};

