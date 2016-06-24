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
public class Lista_enlazada {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        lista_doble ld=lista_doble.getinstancia();
        
        ld.insertar("Hola");
        ld.insertar("Mundo");
        ld.insertar("aa");
        ld.insertar("asd");
        ld.insertar("ff");
        ld.insertar("lpoe");
        ld.MostrarAdelante();
        System.out.println("======================================================");
        
        lista_doble df=lista_doble.getinstancia();
        df.MostrarAdelante();
        
    }
    
}
