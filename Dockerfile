From ubuntu

RUN apt-get update && apt-get install -y git g++ cmake make

WORKDIR /flow_app

COPY . .

RUN mkdir build && cd build && cmake .. && make

CMD ["/flow_app/build/flow_calc"]