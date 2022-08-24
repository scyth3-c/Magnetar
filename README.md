
 <div align="center"> 
   <img src="https://img.shields.io/static/v1?label=dedicate days&message=5&color=success">
   <img src="https://img.shields.io/static/v1?label=update in&message=days&color=green">
   <img src="https://img.shields.io/static/v1?label=lenguage&message=CPP&color=blue">
   <img src="https://img.shields.io/static/v1?label=standar&message=CPP17&color=red">
   <img src="https://img.shields.io/static/v1?label=CONTRIBUTIONS&message=ALL WELCOME&color=green">   
  
 </div>
 
## [ IN PROCESS... 28%]

<hr/>

 Requeriments:
| system          | compiler            |     extra     |
| :---            |     :---:           |        ---:   |
| linux           |  g++                | -pthread flag |


## Latest changes

- now you can render cpp code embedded in html files
- add: post, put, deletex, patch, head, options, link, unlink and purgue with x-www-form-urlconded, geturl, plain/text params each one of them
- added POST and PUT routes with x-www-form-urlencoded and plain/text


## how to get and clone

```

$ git clone https://github.com/scyth3-c/Magnetar.git

$ git submodule init

$ git subodule update
 
```


## compile and use

```
  make:
  
    $ make 
    $ ./Magnetar
    
  normal:
    
    $ g++ -std=c++17 -pthread  main.cpp -o Magnetar
    $ ./Magnetar

```
 **all examples work**
### a preview of my web server,  intuitive and easy to use


well, I wanted to make public the whole process/growth of this project, it is a web server in c++ whose requirements are to have g++ and linux only, currently, only attends GET and others requests but in the future I will expand little by little, it has several functions to make it more familiar as other web servers such as express in Node.js, it has a familiar syntax and I plan to insert existing modules that I uploaded previously as "addons" but I will try as much as possible not to add things to it. as much as possible not to add things that require something else like curl etc. to make it easier to use, here below you will find some screenshots of how it works. documentation is in process and if you want to collaborate do it without any fear, you can talk to me directly, my contact information is at  at [bohorquez.tech](https://bohorquez.tech)

<hr />

## html view render examples

![hmtl](https://user-images.githubusercontent.com/52190352/186290519-d9c21c47-c803-4dc6-a4b8-93ffd0e5b714.png)


![temp](https://user-images.githubusercontent.com/52190352/186290466-ee01ece3-afeb-46a0-99f1-9e9a94d3ee28.png)


![cpp](https://user-images.githubusercontent.com/52190352/181878795-36517e4f-b9e2-4314-b694-2bca2995a8ab.png)




## How to


the functions passed to the routes as the parameters to HEADERS and JSON are Infinite!!!
the best way to learn is by testing, you can compile the examples with g++ 


## routes examples:

**you can see that it's not so wordy, which is the point of this project, but I still have to improve some things... well let's take a look!**
<hr />

![one](https://user-images.githubusercontent.com/52190352/181191086-0534cddc-4122-443f-a7fe-96ce6fef8f6e.png)




**the parameters are quite flexible, I have inserted several paths for the sake of convenience**
<hr />

![par](https://user-images.githubusercontent.com/52190352/181192466-618133a9-454b-4eda-8663-bac2db1a32a3.png)



**implement callbacks functions to the response methods and like a normal lambda function get its environment by reference by adding & between the [] to access the entire scope**
<hr />

![call](https://user-images.githubusercontent.com/52190352/181193685-18e0d75b-b7ac-4eba-824d-9bce5a25137b.png)




**there are also middlewares, functions that we can add to control the route, they are infinite you can add as many as you want but you must add in next() to get to the next function or it will return that one.**
<hr />

![middlewae](https://user-images.githubusercontent.com/52190352/181194266-efb43605-7509-4048-8053-13f99d769013.png)


**Files, you can send the content of files directly**
<hr/>

![files](https://user-images.githubusercontent.com/52190352/181195297-a7a50661-be89-41f1-b698-379b848389db.png)


**but there are things to improve, for example json processing, it is still incomplete.**
<hr />

![json](https://user-images.githubusercontent.com/52190352/181195726-2c49f47c-ba6f-4531-85b5-3c1711232340.png)






## Recomendacion

there are still many other functions like the headers or the return system, so I recommend you to take a look at the examples




## performase

**idle**

| RAM          | CPU            | read / write  |
| :---         |     :---:      |          ---: |
| 170kb        |  0.0           |   N/D-N/D     |

**responding**

| RAM          | CPU            | read / write  |
| :---         |     :---:      |          ---: |
| 190kb        |  0.0           |   N/D-N/D     |









## Extra

**Español**

bueno, queria hacer publico todo el proceso/crecimiento de este proyecto, se trata de un servidor web en c++ cuyos requisitos son tener g++ y linux nada mas,actualmente, solo atiende peticions GET pero en en futuro ire ampliando poco a poco, tiene varias funciones para que sea mas familiar como otros servidores web como express en  Node.js, tiene una sintaxis familiar y planeo inscrustarle modulos ya existentes que subi anteriormente como "addons" pero tratare lo mas posible de no agregar cosas que requieran de algo mas como curl etc. para que sea mas facil de usar, aqui abajo econtraran algunas capturas de como  funciona, la documentacion esta en proceso y si quieres colaborar hazlo sin miedo alguno, puedes hablar conmigo directamente, mi informacion de contacto esta en [bohorquez.tech](https://bohorquez.tech)


