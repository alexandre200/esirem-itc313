# TP1 C++ : Ne vous endormez pas (2*4h)

[_http://ginhac.com/teaching/ITC313/TP/2020-2021/TP1.pdf_](http://ginhac.com/teaching/ITC313/TP/2020-2021/TP1.pdf)

# Préambule

# Préambule

## Quelques bonnes habitudes à prendre lorsqu'on fait de la programmation informatique

Avant chaque écriture de programme (quel que soit le langage), il faut successivement :

1. Analyser le problème à résoudre
2. Proposer un algorithme / méthode permettant de résoudre le problème posé.
3. En déduire le programme associé.
4. Simuler l'exécution du programme avec des valeurs assez variées.
5. S'il y a des erreurs revenir au point (3), (2) ou (1).

Les points (1) et (2) doivent se dérouler loin du clavier car ils sont totalement indépendants de tout langage de programmation. Un problème bien compris est ensuite facile à transcrire dans un langage ou un autre !


# Introduction

Ce TP consiste à concevoir une application de gestion des réservations d'un hôtel.

Un Hôtel peut être constitué des informations suivantes :

- Un identifiant unique (ex : OCEAN11),
- Un nom (ex : « Le Bellagio »),
- Une ville (ex : Las Vegas »),
- Une liste des chambres de l'hôtel (ex : un tableau de 3933 chambres).

Une Chambre peut être constituée des informations suivantes :

- Un identifiant unique (ex : 2112)
- Un type (ex : Single, Double, Suite, …)
- Un prix par nuit (ex : 180 $)

Un Client peut être constitué des informations suivantes :

- Un identifiant unique,
- Un nom,
- Un prénom,
- Un nombre de réservations déjà effectuées (programme de fidélité).

Une Réservation peut être constituée des informations suivantes :

- Un identifiant unique de réservation,
- Une date de début,
- Une date de fin (postérieure après la date de début),
- Un identifiant d'hôtel,
- Un identifiant de chambre,
- Un identifiant de client,
- Un montant total.

Une Date est constituée de

- Un jour,
- Un mois,
- Une année.

A l'exception de la Date, tous les autres éléments (Hôtel, Chambre, Client, Réservation) peuvent être adaptés en fonction de la manière dont vous appréhendez le problème de gestion des réservations.

Pour chacune des questions, on suppose que tous les paramètres passés aux constructeurs des classes sont valides, ce qui permet de créer les objets. Par contre, il est indispensable de s'assurer au préalable que ces paramètres sont bons. Par exemple, avant de créer une réservation, il est nécessaire de vérifier que les 2 dates sont conformes, que la date de fin de séjour est après la date de début et que la chambre réservée est bien disponible. Si ces conditions sont respectées alors on peut créer l'objet Réservation en lui passant la liste des bons paramètres. Dans le cas contraire, on affiche un message d'erreur et on redemande la saisie des informations.

# Partie 1 : Création des classes

## Question 1 : Création de la classe Date

1.a) Reprenez la classe Date vue en cours et vérifiez son bon fonctionnement avec un programme de test.

## Question 2 : Création de la classe Client

2.a) Créer la classe Client avec ses variables membres et ses fonctions getters.

2.b) Ajouter une méthode permettant de modifier un client.

2.c) Créer un programme principal permettant de tester et valider le code de la classe Client.

## Question 3 : Création de la classe Chambre

3.a) Créer la classe Chambre avec ses variables membres (le type de la chambre sera géré avec une énumération) et ses fonctions getters.

3.b) Ajouter une méthode permettant de modifier une chambre.

3.c) Créer un programme principal permettant de tester et valider le code de la classe Chambre.

## Question 4 : Création de la classe Hôtel

4.a) Créer la classe Hôtel avec ses variables membres et ses fonctions getters.

4.b) Ajouter une méthode permettant de remplir le tableau de chambres.

4.c) Créer un programme principal permettant de tester et valider le code de la classe Hôtel.

## Question 5 : Création de la classe Réservation

5.a) Créer la classe Réservation avec ses variables membres et ses fonctions getters.

5.b) Ajouter une méthode permettant de modifier les dates du séjour.

5.c) Ajouter une méthode permettant de modifier le numéro de chambre.

5.d) Ajouter une méthode permettant de calculer le montant total de la réservation (Nombre de nuits \* prix par nuit) avec application d'une éventuelle remise (par exemple 10% de remise pour fidélité).

5.e) Créer un programme principal permettant de tester et valider le code de la classe Réservation.

# Partie 2 : Utilisation des classes dans une application

Maintenant que toutes les classes de base ont été développées, vous pouvez créer le programme principal permettant de créer et gérer les réservations d'un hôtel.

## Question 6 : Création d'un hôtel et de clients

6.a) Dans un programme principal, créer un hôtel avec un tableau (array ou vector) de 10 chambres réparties en 3 « Single », 5 « Double » et 2 « Suite » avec des prix différents (Single au prix de 100$, Double au prix de 125$ et Suite au prix de 210$ par exemple).

6.b) Ajouter une surcharge de l'operateur << à la classe Chambre permettant de faire l'affichage à l'écran de la liste des informations d'une chambre. Ajouter également une surcharge de l'operateur << à la classe Hotel permettant de faire l'affichage à l'écran de la liste de toutes les informations de l'hotel. Utiliser ces méthodes pour vérifier que les informations saisies à la question 6.a sont bien correctes.

6.c) Créer ensuite une liste d'une dizaine de clients sous la forme d'un tableau (array ou vector).

6.d) Ajouter une surcharge de l'operateur << à la classe Client permettant de faire l'affichage à l'écran de la liste des informations d'un client. Utiliser cette méthode pour vérifier que les informations saisies à la question 6.c sont bien correctes.

## Question 7 : Validation des dates de réservations

Les réservations seront stockées dans un tableau dynamique de type std ::vector.

7.a) Ecrire le code permettant de saisir au clavier les dates d'une réservation dans l'hôtel créé à la question 6. N'oubliez pas de vérifier la conformité des dates saisies (fonction CheckDate) ainsi que la chronologie des dates saisies (operateur de comparaison). Si les dates ne sont pas valides, redemander la saisie.

7.b) Créer la fonction permettant de calculer le nombre de nuits du séjour dès que les 2 dates sont conformes. Insérer l'appel de cette fonction dans le code écrit à la question 7.a afin d'indiquer au client le nombre de nuits de la réservation.

## Question 8 : Choix d'une chambre

Les dates du séjour étant validées, il est nécessaire de choisir une chambre disponible.

8.a) Ecrire le code permettant de saisir au clavier le type de chambre souhaité.

8.b) Créer la fonction permettant de vérifier si une chambre de ce type est disponible dans l'hôtel à la période donnée et utiliser la pour sélectionner la première chambre possible. Afficher à l'écran l'identifiant de la chambre sélectionné ainsi que son prix par nuit.

8.c) Dans le cas où aucune chambre du type demandé n'est disponible, afficher un message d'erreur et demander à l'utilisateur de saisir un autre type de chambre.

## Question 9 : Choix du client

Les dates du séjour et la chambre étant validées, il est nécessaire de choisir le client.

9.a) Ecrire le code permettant de saisir au clavier le nom du client.

9.b) Créer la fonction permettant d'afficher à l'écran tous les clients ayant ce nom et demander à l'utilisateur de choisir le bon client parmi les clients potentiels (gestion des homonymes).

9.c) Afficher à l'écran les informations du client sélectionné.

## Question 10 : Validation de la réservation

Les dates du séjour, la chambre et le client étant validés, il est nécessaire de créer la réservation

10.a) Calculer et afficher le prix exact du séjour.

10.b) Ajouter la nouvelle réservation dans le tableau de réservations et afficher les informations de la réservation créée.

10.c) En reprenant la procédure précédente, créer au moins 5 réservations reprenant les différents cas possibles (erreur de date, plus de chambres disponible, …) afin de valider parfaitement les différentes méthodes.

## Question 11 : Gestion des réservations

11.a) Créer la fonction permettant d'afficher toutes les réservations.

11.b) Créer la fonction permettant d'afficher une réservation en lui passant en argument le numéro d'une réservation.

11.c) Créer la fonction permettant d'afficher toutes les réservations d'un client en lui passant en argument soit le nom du client, soit l'identifiant du client.

11.d) Créer la fonction permettant de modifier une réservation.

11.e) Créer la fonction permettant d'annuler une réservation.

## Question 12 : Questions subsidiaires

Ajouter toute fonction, classe, méthode vous permettant d'ajouter des fonctionnalités à ce système de gestion d'hôtel.

Par exemple, vous pouvez créer une agence de réservations capables de gérer plusieurs hôtels. Vous pouvez aussi créer des moyens de paiement pour les clients. Vous pouvez ajouter des options supplémentaires dans les chambres, dans les réservations …