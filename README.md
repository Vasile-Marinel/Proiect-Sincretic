# Proiect-Sincretic

## *Poblema Reginelor*

<img src="https://s13emagst.akamaized.net/products/38035/38034884/images/res_ada6514a41c97da7d1524d83d79a429c.jpg" height="180" width="170"/>

### In ce consta problema reginelor?

Problema reginelor este o problemă clasică de puzzle și combinatorică. Enunțul problemei este să plasezi N regine pe o tablă de șah de dimensiune N×N astfel încât niciuna dintre ele să nu se atace reciproc. O regină poate ataca orice pereche de celule pe aceeași linie, coloană sau diagonale.

#### Pasii de urmat

**1. Implementarea problemei in cod:**  
- crearea unui program in C pentru rezolvarea `Problemei Reginelor` ([explicare cod](https://pastebin.com/areLiavu)).

**2. Crearea unui Dockerfile:**
- am creat un Dockerfile pentru a defini mediul și procesul de construire.
- setam o imagine de baza (Alpine Linux), am copiat programul C în container, am instalat dependențe și am compilat programul.

**3. Construirea unei imagini Docker:**
- folosim comanda *docker build* pentru a crea o imagine Docker bazata pe Dockerfile: `docker build -t problema_reginelor .`
- imaginea contine programul C si mediul sau. 

**4. Rularea unui container Docker:**
- am lansat un container Docker din imagine folosind comanda docker run: `docker run -it hanoi-towers` .
 - instructiunea `-it` creeaza un mediu interactiv si terminal pentru containerul nostru.

**6. "Impingerea" pe Docker Hub:**
- ii dam un tag imaginii Docker cu numele meu de utilizator de pe Docker Hub si denumirea programului: `docker tag problema_reginelor:latest vasilemarinel/problema_reginelor:latest`
 - "impingerea" imaginii Docker pe Docker Hub folosind comanda docker: `docker push vasilemarinel/problema_reginelor:latest`

**7. Cum rulam imaginea Docker**
- folosim comanda docker pull: `docker pull vasilemarinel/problema_reginelor:latest`
