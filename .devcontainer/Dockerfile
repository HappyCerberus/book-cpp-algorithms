#FROM ubuntu:22.04
FROM texlive/texlive:latest

ARG DEBIAN_FRONTEND=noninteractive

RUN set -ex && \
    apt-get update && \
    apt-get install -y cmake gcc g++