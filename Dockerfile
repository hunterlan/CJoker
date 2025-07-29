FROM alpine:3.20

RUN apk add --update --no-cache alpine-sdk gdb valgrind cmake git cunit cunit-dev