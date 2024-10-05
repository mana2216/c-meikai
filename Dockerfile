FROM gcc:14.2.0

RUN apt-get update && \
    apt-get install -y locales build-essential
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y tzdata 
RUN locale-gen ja_JP.UTF-8
ENV LANG=ja_JP.UTF-8
ENV TZ=Asia/Tokyo
WORKDIR /c-meikai