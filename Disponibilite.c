#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif




#include <stdio.h>
#include <string.h>
#include "Disponibilite.h"
#include <gtk/gtk.h>


enum   
{       
        JOUR,
        DEBUT,
	FIN,
	COLUMNS
        
};

//Ajouter disponibilite

void ajou_disponibilite(dispo d)
{

 FILE *f;
  f=fopen("Disponibilite.txt","a+");
  if(f!=NULL) 
  {
  fprintf(f,"%s %s %s \n",d.jour,d.debut,d.fin);
  fclose(f);

}

}


//Afficher Disponibilite


void afficher_disponibilite(GtkWidget *list)
{
        GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter    iter;
	GtkListStore *store;

	char jour [30];
	char debut [30];
	char fin [30];
        store=NULL;

       FILE *f;
	
	store=gtk_tree_view_get_model(list);	
	if (store==NULL)
	{

                renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("jour", renderer,"text",JOUR, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("debut", renderer,"text",DEBUT, NULL);	
		gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);	
	
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("fin", renderer,"text",FIN, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);
	

               
	
	}

	
	store=gtk_list_store_new (COLUMNS, G_TYPE_STRING,  G_TYPE_STRING, G_TYPE_STRING);

	f = fopen("Disponibilite.txt", "r");
	
	if(f==NULL)
	{

		return;
	}		
	else 

	{ f = fopen("Disponibilite.txt", "a+");
              while(fscanf(f,"%s %s %s \n",jour,debut,fin)!=EOF)
		{
	gtk_list_store_append (store, &iter);
	gtk_list_store_set (store, &iter, JOUR, jour, DEBUT, debut, FIN, fin, -1); 
		}
		fclose(f);
	gtk_tree_view_set_model (GTK_TREE_VIEW (list),  GTK_TREE_MODEL (store));
    g_object_unref (store);
	}
}





