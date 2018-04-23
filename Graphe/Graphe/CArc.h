#pragma once
#include "CSommet.h"

/**
	* \brief contient le sommet vers lequel l'arc se dirige
	*
*/
class CArc
{
private:
	CSommet * pSOMARCDestination;
public:
	/**
		* \brief Constructeur par defaut
		*
		* Le parametre SOMARCDestination est correctement initialis�
		*
	*/
	CArc();

	/**
		* \brief Constructeur � 1 param�tre 
		*
		* Initialise la variable SOMARCDestination avec la param�tre SOMSommet
		*
		* E:
		* \param SOMSommet CSommet : Valeur � laquelle SOMARCDestination est initialiser
		*
	*/
	CArc(CSommet * SOMSommet);

	/**
		* \brief Constructeur de recopie
		*
		* Permet de recopier la valeur SOMARCDestinationd e l'objet pass� en param�tre directement
		* dans this.SOMARCDestination
		*
		* E:
		* \param ARCParam CArc : Objet contenant les valeurs � recopier
		*
	*/
	CArc(const CArc & ARCParam);

	/**
		* \brief Destructeur
		* 
		* Detruit correctement la variable SOMARCDestination de la classe
		*
	*/
	~CArc();

	/**
		* \brief Operateur d'affectation
		*
		* E:
		* \param ARCParam CArc : Objet contenant les valeurs � recopier
		* \return CArc : 
	*/
	CArc & operator=(const CArc & ARCParam);

	/**
		* \brief Affecter un CSommet a la variable SOMARCDestination
		*
		* E:
		* \param SOMSommet CSommet : Objet de la classe CSommet vers lequel notre instance classe se dirige
		*
	*/
	void ARCAffecterDest(CSommet * pSOMSommet);

	/**
		* \brief envoie la valeur du param�tre SOMARCDestination
		* 
		* S:
		* \return CSommet : Sommet vers lequel l'arc se dirige
	*/
	CSommet * ARCLiredest();
};

