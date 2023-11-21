FROM --platform=linux/amd64 alpine:latest

WORKDIR /problema_reginelor

COPY problema_reginelor.c .

RUN apk add --no-cache build-base

RUN gcc -o problema_reginelor problema_reginelor.c

CMD [ "./problema_reginelor" ]
