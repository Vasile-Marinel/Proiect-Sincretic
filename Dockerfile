# specifică imaginea de bază utilizată pentru construirea containerului, imaginea de baza este alpine:latest, dar este construita pentru arhitectura linux/amd64
FROM --platform=linux/amd64 alpine:latest  
# Se seteaza directorul de lucru
WORKDIR /problema_reginelor
# Această comandă copiază fișierul sursă problema_reginelor.c din directorul local (unde se află Dockerfile) în directorul curent al containerului (/problema_reginelor).
COPY problema_reginelor.c .
# Instaleaza compilatorul de care avem nevoie pentru a compila fisierul sursa
RUN apk add --no-cache build-base
# Se compileaza fisierul sursa si se genereaza executabilul problema_reginelor
RUN gcc -o problema_reginelor problema_reginelor.c
# Specifică comanda implicită care trebuie executată atunci când containerul este pornit
CMD [ "./problema_reginelor" ]
