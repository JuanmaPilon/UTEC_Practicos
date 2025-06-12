#-----------------------------------------------------------------------

import time
import random
import threading

#-----------------------------------------------------------------------

ANIMALES = 10   #para 100 Lts de agua
BEBEDERO = 5	#limitante de agua
TIEMPO = 0	#minutos

#-----------------------------------------------------------------------

class animal(threading.Thread):
	semaforo = threading.Lock()
	estado = []
	bebiendo = []
	count = 0
	
#-----------------------------------------------------------------------

	def tempo(self):
		print("El tiempo es: ",TIEMPO)
		
	def __init__(self):
		super().__init__()
		self.id=animal.count
		animal.count+=1
		animal.estado.append('VIVIENDO')
		animal.bebiendo.append(threading.Semaphore(0))
		print("Animal {} VIVIENDO".format(self.id))
	 
	def __del__(self):
		print("ANIMALITO {} TERMINO SU DIA :)".format(self.id))
	  
	def beber(self):
		global BEBEDERO
		global TIEMPO
		TIEMPO+=1
		animal.semaforo.acquire()
		animal.estado[self.id] = 'BEBIENDO'
		print("ANIMALITO {} BEBIENDO".format(self.id))
		time.sleep(random.randint(0,2))
		BEBEDERO -= (random.uniform(0.04,0.50))
		print("LA CANTIDAD DE LITROS QUE QUEDAN EN EL BEBEDERO SON:",BEBEDERO,"LTS")
		animal.semaforo.release()
		print("ANIMALITO {} TERMINO DE BEBER".format(self.id))
	 
	def dormir(self):
		global TIEMPO
		TIEMPO+=1
		animal.estado[self.id] = 'DURMIENDO'
		print("ANIMALITO {} A MIMIR".format(self.id))
		time.sleep (random.randint(0,8))
		print("ANIMALITO {} TERMINO DE DURMIR".format(self.id))
	 
	def comer(self):
		global TIEMPO
		TIEMPO+=1
		animal.estado[self.id] = 'COMIENDO'
		print("ANIMALITO {} COMIENDO".format(self.id))
		time.sleep (random.randint(0,2))
		print("ANIMALITO {} TERMINO DE COMER".format(self.id))
	 
	def andar(self):
		global TIEMPO
		TIEMPO+=1
		animal.estado[self.id] = 'ANDANDO'
		print("ANIMALITO {} PASEANDO".format(self.id))
		time.sleep (random.randint(0,4))
		print("ANIMALITO {} TERMINO DE PASEAR".format(self.id))
	 
#-------------------------------------------------------------------------	 
	 
	def run(self):
		if BEBEDERO < 0:
			__del__(self)
			self.tempo()
		else:
			while BEBEDERO >0:
				self.dormir()
				self.comer()
				self.beber()
				self.andar()
		self.tempo()
#-------------------------------------------------------------------------

def main():
	lista=[]
	for i in range (ANIMALES):
		lista.append(animal())
	   	
	for f in lista:
		f.start()
	   	
	for f in lista:
		f.join()
	   	
if __name__=="__main__":
	main()
