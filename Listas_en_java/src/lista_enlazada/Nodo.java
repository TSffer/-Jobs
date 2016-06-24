/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lista_enlazada;

/**
 *
 * @author Luis Fernando
 */
public class Nodo {
    public Nodo siguiente;
    public Nodo anterior;
    public String dato;
    
    public Nodo(String dat,Nodo ant,Nodo sig)
    {
        siguiente = sig;
        anterior = ant;
        dato = dat;
    }
    
    public Nodo getSiguiente(){
        return siguiente;
    }
    
    public void setSiguiente(Nodo siguiente){
        this.siguiente = siguiente;
    }
    
    public Nodo getAnterior(){
        return anterior;
    }
    
    public void setAnterior(Nodo anterior){
        this.anterior =anterior;
    }
    
    public String getDato(){
        return dato;
    }
    
    public void setDato(String dato){
        this.dato =dato;
    }
            
    
}
