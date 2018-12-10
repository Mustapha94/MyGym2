#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif




#include <stdio.h>
#include <string.h>
#include "planning.h"
#include <gtk/gtk.h>


enum   
{       
        P,
        JOUR,
	HEURE,
	COLUMNS
        
};

//Ajouter planning

void ajou_planning(plan d)
{

 FILE *f;
  f=fopen("planning.txt","a+");
  if(f!=NULL) 
  {
  fprintf(f,"%s %s %s \n",d.p,d.jour,d.heure);
  fclose(f);

}

}


//Afficher planning


void afficher_planning(GtkWidget *list)
{
        GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter    iter;
	GtkListStore *store;

	char p [30];
	char jour [30];
	char heure [30];
        store=NULL;

       FILE *f;
	
	store=gtk_tree_view_get_model(list);	
	if (store==NULL)
	{

                renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("seance", renderer,"text",P,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("jour", renderer,"text",JOUR,NULL);	
		gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);	
	
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("horaire", renderer,"text",HEURE,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);
	

               
	
	}

	
	store=gtk_list_store_new (COLUMNS, G_TYPE_STRING,  G_TYPE_STRING, G_TYPE_STRING);

	f = fopen("planning.txt","r");
	
	if(f==NULL)
	{

		return;
	}		
	else 

	{ f = fopen("planning.txt","a+");
              while(fscanf(f,"%s %s %s \n",p,jour,heure)!=EOF)
		{
	gtk_list_store_append (store, &iter);
	gtk_list_store_set (store, &iter, P, p, JOUR, jour, HEURE, heure, -1); 
		}
		fclose(f);
	gtk_tree_view_set_model (GTK_TREE_VIEW (list),  GTK_TREE_MODEL (store));
    g_object_unref (store);
	}
}





