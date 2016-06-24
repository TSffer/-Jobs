
package lista_enlazada;


public class lista_doble {
    public Nodo inicio;
    public Nodo fin;
    private static lista_doble unico=null;
    public static lista_doble getinstancia(){
        if (unico==null){
            unico=new lista_doble();
        }
        return unico;
    }
    private lista_doble()
    {
        inicio = null;
        fin= null;
    }
    public void insertarInicio(String dato)
    {
        if(inicio == null)
        {
            inicio=new Nodo(dato,null,null);
            fin = inicio;
        }else{
            Nodo nuevo = new Nodo(dato,null,inicio);
            inicio.setAnterior(nuevo);
            inicio = nuevo;
        }
    }
    
    public void insertar(String dato)
    {
        if(inicio == null)
        {
            fin=new Nodo(dato,null,null);
            inicio= fin;
        }else{
            Nodo nuevo = new Nodo(dato,fin,null);
            fin.setSiguiente(nuevo);
            fin = nuevo;
        }
    }
  
    
     public String ExtraerFin()
    {
        String dato = fin.getDato();
        fin = fin.getAnterior();
        if (fin !=null)
        {
            fin.setAnterior(null);
        }else{
            inicio = null;
        }
        return dato;
        
    }
     
     public void MostrarAdelante()
     {
         Nodo temp = inicio;
         while(temp!= null)
         {
             System.out.println(temp.getDato());
             temp = temp.getSiguiente();
         }
     }
     
        public void MostrarRegreso()
     {
         Nodo temp = fin;
         while(temp!= null)
         {
             System.out.println(temp.getDato());
             temp = temp.getAnterior();
         }
     }
        
        public Boolean buscar(String dato)
     {
         Nodo temp = inicio;
         while(temp != null)
         {
             if(temp.getDato().equals(dato)){
                 return true;
             }
             temp = temp.getSiguiente();
         }
         return false;
     }
    
}
