#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "verifier.h"
#include <string.h>
#include "Disponibilite.h"
#include "specialitee.h"
#include "planning.h"
#include "modifier_disp.h"
#include "suprimer_disp.h"
#include "suprimer_spec.h"

void
on_c1_clicked                     (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *Espace_coach;
	GtkWidget *specialite;
	GtkWidget *treeview4;
	Espace_coach=lookup_widget(widget,"Espace_coach");
	gtk_widget_destroy(Espace_coach);
	specialite=create_specialite();
	gtk_widget_show(specialite);
	treeview4=lookup_widget(specialite,"treeview4");
	afficher_specialite(treeview4);




}

void
on_c2_clicked                     (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *Espace_coach;
	GtkWidget *disponible;
	GtkWidget *treeview5;
	Espace_coach=lookup_widget(widget,"Espace_coach");
	gtk_widget_destroy(Espace_coach);
	disponible=create_disponible();
	gtk_widget_show(disponible);	
	treeview5=lookup_widget(disponible,"treeview5");
	afficher_disponibilite(treeview5);
}



void
on_c3_clicked                     (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *Espace_coach;
	GtkWidget *planning;
	GtkWidget *treeview4;

	Espace_coach=lookup_widget(widget,"Espace_coach");
	gtk_widget_destroy(Espace_coach);
	planning=create_planning();
	gtk_widget_show(planning);
	treeview4=lookup_widget(planning,"treeview4");
	afficher_planning(treeview4);
}

void
on_c4_clicked                          (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *Espace_coach;
	GtkWidget *authentification;
	Espace_coach=lookup_widget(widget,"Espace_coach");
	gtk_widget_destroy(Espace_coach);
	authentification=create_authentification();
	gtk_widget_show(authentification);
}



void
on_c5_clicked                     (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *specialite;
	GtkWidget *ajouter_specialite;
	specialite=lookup_widget(widget,"specialite");
	gtk_widget_destroy(specialite);
	ajouter_specialite=create_ajouter_specialite();
	gtk_widget_show(ajouter_specialite);

}

void
on_c7_clicked                          (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *specialite;
	GtkWidget *suprimer_specialite;
	specialite=lookup_widget(widget,"specialite");
	gtk_widget_destroy(specialite);
	suprimer_specialite=create_suprimer_specialite();
	gtk_widget_show(suprimer_specialite);
}


void
on_c8_clicked                     (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *specialite;
	GtkWidget *Espace_coach;
	GtkWidget *treeview4;
	specialite=lookup_widget(widget,"specialite");
	gtk_widget_destroy(specialite);
	Espace_coach=create_Espace_coach();
	gtk_widget_show(Espace_coach);
	treeview4=lookup_widget(specialite,"treeview4");
	afficher_specialite(treeview4);
}

void
on_c9_clicked                     (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *disponible;
	GtkWidget *ajouter_disponible;
	disponible=lookup_widget(widget,"disponible");
	gtk_widget_destroy(disponible);
	ajouter_disponible=create_ajouter_disponible();
	gtk_widget_show(ajouter_disponible);
}

void
on_c10_clicked                         (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *disponible;
	GtkWidget *modifier_disponible;
	

	disponible=lookup_widget(widget,"disponible");
	gtk_widget_destroy(disponible);
	modifier_disponible=create_modifier_disponible();
	gtk_widget_show(modifier_disponible);

}

void
on_c11_clicked                         (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *disponible;
	GtkWidget *suprimer_disponible;

	disponible=lookup_widget(widget,"disponible");
	gtk_widget_destroy(disponible);
	suprimer_disponible=create_suprimer_disponible();
	gtk_widget_show(suprimer_disponible);
	
}


void
on_c12_clicked                    (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *disponible;
	GtkWidget *Espace_coach;
	disponible=lookup_widget(widget,"disponible");
	gtk_widget_destroy(disponible);
	Espace_coach=create_Espace_coach();
	gtk_widget_show(Espace_coach);
}

void
on_c13_clicked                    (GtkWidget *widget, gpointer user_data)
{
	plan d;

	GtkWidget *input1, *input2,*input3;
	GtkWidget *modifier_specialite;

	modifier_specialite=lookup_widget(widget,"modifier_specialite");

	input1=lookup_widget(widget,"p");
	input2=lookup_widget(widget,"jour");
	input3=lookup_widget(widget,"heure");

	strcpy(d.p,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(d.jour,gtk_entry_get_text(GTK_ENTRY(input2)));
	strcpy(d.heure,gtk_entry_get_text(GTK_ENTRY(input3)));;
	
	ajou_planning(d);
}

void
on_c15_clicked                    (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *planning;
	GtkWidget *modifier_planning;
	GtkWidget *treeview1;

	modifier_planning=lookup_widget(widget,"modifier_planning");
	gtk_widget_destroy(modifier_planning);
	planning=create_planning();
	gtk_widget_show(planning);
	treeview1=lookup_widget(planning,"treeview1");
	afficher_planning(treeview1);
}

void
on_c16_clicked                    (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *planning;
	GtkWidget *modifier_planning;
	

	planning=lookup_widget(widget,"planning");
	gtk_widget_destroy(planning);
	modifier_planning=create_modifier_planning();
	gtk_widget_show(modifier_planning);
	
}

void
on_c17_clicked                    (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *planning;
	GtkWidget *Espace_coach;

	planning=lookup_widget(widget,"planning");
	gtk_widget_destroy(planning);
	Espace_coach=create_Espace_coach();
	gtk_widget_show(Espace_coach);
}

void
on_c21_clicked                         (GtkWidget *widget, gpointer user_data)
{

}


void
on_c22_clicked                         (GtkWidget *widget, gpointer user_data)
{

}


void
on_c23_clicked                         (GtkWidget *widget, gpointer user_data)
{

}

void
on_c24_clicked                         (GtkWidget *widget, gpointer user_data)
{	
	GtkWidget *Espace_coach;
	GtkWidget *authentification;
	GtkWidget *user, *pwd;
	GtkWidget *output;
	authentification=create_authentification();
	
	int x;
	char login3[20];
	char Password3[20];

	user=lookup_widget(widget,"user");
	pwd=lookup_widget(widget,"pwd");
	output=lookup_widget(widget,"incorrect");
	//role=lookup_widget(widget,"role");
	strcpy(login3,gtk_entry_get_text(GTK_ENTRY(user)));
	strcpy(Password3,gtk_entry_get_text(GTK_ENTRY(pwd)));
	x = verifier(login3,Password3);
	if (x==-1)
	{
		gtk_label_set_text(GTK_LABEL(output),"mdp incorrect");
	}	
	else
	{	
		authentification=lookup_widget(widget,"authentification");
		gtk_widget_destroy(authentification);
		Espace_coach=create_Espace_coach();
		gtk_widget_show(Espace_coach);	
	}

	
	
		

}


void
on_c25_clicked                         (GtkWidget *objet_graphique, gpointer user_data)
{
	spec s;

	GtkWidget *input1;
	GtkWidget *specialite;

	specialite=lookup_widget(objet_graphique,"specialite");

	input1=lookup_widget(objet_graphique,"special");
	strcpy(s.s,gtk_entry_get_text(GTK_ENTRY(input1)));
	ajou_specialite (s);
}


void
on_c26_clicked                         (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *ajouter_specialite;
	GtkWidget *specialite;
	GtkWidget *treeview4;

	ajouter_specialite=lookup_widget(widget,"ajouter_specialite");
	gtk_widget_destroy(ajouter_specialite);
	specialite=create_specialite();
	gtk_widget_show(specialite);
	treeview4=lookup_widget(specialite,"treeview4");
	afficher_specialite(treeview4);	
}

void
on_c27_clicked                         (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *ajouter_disponible;
	GtkWidget *disponible;
	GtkWidget *treeview5;

	ajouter_disponible=lookup_widget(widget,"ajouter_disponible");
	gtk_widget_destroy(ajouter_disponible);
	disponible=create_disponible();
	gtk_widget_show(disponible);
	treeview5=lookup_widget(disponible,"treeview5");
	afficher_disponibilite(treeview5);	
}

void
on_c28_clicked                         (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *modifier_disponible;
	GtkWidget *disponible;
	GtkWidget *treeview5;

	modifier_disponible=lookup_widget(widget,"modifier_disponible");
	gtk_widget_destroy(modifier_disponible);
	disponible=create_disponible();
	gtk_widget_show(disponible);	
	treeview5=lookup_widget(disponible,"treeview5");
	afficher_disponibilite(treeview5);	



}


void
on_c29_clicked                         (GtkWidget *widget, gpointer user_data)
{
		
	GtkWidget *combo2;
	GtkWidget *combo3;
	GtkWidget *combo4;
	dispo s;

	combo2=lookup_widget(widget, "combo2");
	combo3=lookup_widget(widget, "combo3");
	combo4=lookup_widget(widget, "combo4");

	strcpy(s.jour,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combo2)));
	strcpy(s.debut,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combo3)));
	strcpy(s.fin,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combo4)));

	ajou_disponibilite(s);

}




void
on_c30_clicked                         (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *combo6;
	GtkWidget *combo7;
	GtkWidget *combo8;
	dispon p;

	combo6=lookup_widget(widget, "combo6");
	combo7=lookup_widget(widget, "combo7");
	combo8=lookup_widget(widget, "combo8");

	strcpy(p.jour,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combo6)));
	strcpy(p.debut,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combo7)));
	strcpy(p.fin,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combo8)));

	modif_dispo(p);
}


void
on_c31_clicked                         (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *suprimer_disponible;
	GtkWidget *disponible;
	GtkWidget *treeview5;

	suprimer_disponible=lookup_widget(widget,"suprimer_disponible");
	gtk_widget_destroy(suprimer_disponible);
	disponible=create_disponible();
	gtk_widget_show(disponible);	
	treeview5=lookup_widget(disponible,"treeview5");
	afficher_disponibilite(treeview5);	
}


void
on_c32_clicked                         (GtkWidget *widget, gpointer user_data)
{
	char a[20];

	GtkWidget *input1;
	GtkWidget *suprmier_disponible;

	suprmier_disponible=lookup_widget(widget,"suprmier_disponible");

	input1=lookup_widget(widget,"entry1");

	strcpy(a,gtk_entry_get_text(GTK_ENTRY(input1)));
	
	sup_dispo(a);
	
}


void
on_c33_clicked                         (GtkWidget *widget, gpointer user_data)
{
	
	char a[20];

	GtkWidget *input1;
	GtkWidget *suprmier_specialite;

	suprmier_specialite=lookup_widget(widget,"suprmier_specialite");

	input1=lookup_widget(widget,"entry2");

	strcpy(a,gtk_entry_get_text(GTK_ENTRY(input1)));
	
	sup_speci(a);
}


void
on_c34_clicked                         (GtkWidget *widget, gpointer user_data)
{
	GtkWidget *suprimer_specialite;
	GtkWidget *specialite;
	GtkWidget *treeview4;

	suprimer_specialite=lookup_widget(widget,"suprimer_specialite");
	gtk_widget_destroy(suprimer_specialite);
	specialite=create_specialite();
	gtk_widget_show(specialite);
	treeview4=lookup_widget(specialite,"treeview4");
	afficher_specialite(treeview4);	
}


void
on_button_refresh_coach_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_refresh_planning_clicked     (GtkButton       *button,
                                        gpointer         user_data)
{

}

