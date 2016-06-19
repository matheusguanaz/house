#include <stdlib.h>
#include <gtk/gtk.h>
#include <math.h>

int main(int argc, char *argv[]) {

double q1, q2, q3, q4, q5, q6, q7, q8, q9, qt;


    gtk_init(&argc, &argv);
    GtkBuilder *gtkbuilder;
	GtkWidget *window, *spin, *prim, *window3;
	GtkEntry *entry, *entry1, *entry2, *entry3, *entry4, *entry5, *entry6, *entry7, *entry8, *entry9, *entry10, *entry11, *entry12, *entry13, *entry14, *entry15, *entry16, *entry17, *entry18;



    gtkbuilder = gtk_builder_new();
    gtk_builder_add_from_file(gtkbuilder, "teste.xml", NULL);
    window = GTK_WIDGET(gtk_builder_get_object(gtkbuilder, "window3"));

    GtkSpinButton *spinbutton10 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton10");

    //spinbutton10=  gtk_spin_button_new ( NULL, 1 ,2);

    entry = (GtkEntry*)gtk_builder_get_object(gtkbuilder, spinbutton10);
    const char *entryText = gtk_entry_get_text(entry);
    double v1 = atof(entryText);

    q1= 100.8 * exp ( pow( (v1 + -106), 2 ) / -3745 );

    GtkSpinButton *spinbutton11 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton11");
    entry1 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton11);
    const char *entryText1 = gtk_entry_get_text(entry1);
    double v2 = atof(entryText1);

    q2=98.24034 - 34.7145 * (log10(v2)) + 2.614267 *(pow(log10(v2), 2)) + 0.107821 * (pow(log10(v2), 3));

    GtkSpinButton *spinbutton12 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton12");
    entry2 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton12);
    const char *entryText2 = gtk_entry_get_text(entry2);
    double v3 = atof(entryText2);

    if(v3<=2){
		q3=1;
	}
	else if(v3>2 && v3<=6.9){
		q3= -37.1085 +41.91277*v3 - 15.7043 * pow(v3, 2) + 2.417486 * pow(v3, 3) - 0.091252* pow(v3, 4);
	}
	else if(v3>6.9 && v3<=7.1){
		q3 = -4.69365 - 21.4593*v3 - 68.4561* pow(v3, 2) + 21.638886*pow(v3, 3) - 1.59165* (v3, 4);
	}
	else if(v3> 7.1 && v3 <=12){
		q3= -7698.19 + 3262.031 * v3 - 499.494 * pow(v3, 2) + 33.1551* pow(v3, 3) - 0.810613*pow(v3, 4);
	}
	else{
		q3=3;
	}
    GtkSpinButton *spinbutton13 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton13");
    entry3 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton13);
    const char *entryText3 = gtk_entry_get_text(entry2);
    double v4 = atof(entryText3);

    if(v4>30){
		q4=2;
	}
	else{
		q4= 100.9571 - 10.7121 * v4 + 0.49544 * pow(v4, 2) - 0.011167 * pow(v4, 3) + 0.0001 * pow(v4, 4);
	}

    GtkSpinButton *spinbutton14 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton14");
    entry4 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton14);
    const char *entryText4 = gtk_entry_get_text(entry4);
    double v5 = atof(entryText4);

    if(v5<=10){
		q5=-5.1*v5+100.17;
	}
	else if(v5>10 && v5<=60){
		q5=-22.853*log(v5) + 101.18;
	}
	else if(v5>60 && v5<=90){
		q5=10000000000*pow(v5, -5.1161);
	}
	else if(v5>90){
		q5=1;
	}

    GtkSpinButton *spinbutton15 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton15");
    entry5 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton15);
    const char *entryText5 = gtk_entry_get_text(entry5);
    double v6 = atof(entryText5);

    if(v6>10){
		q6=5;
	}
	else{
		q6= 79.7*(pow(v6 + 0.821, -1.15));
	}

    GtkSpinButton *spinbutton16 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton16");
    entry6 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton16);
    const char *entryText6 = gtk_entry_get_text(entry6);
    double v7 = atof(entryText6);

    if(v7>100){
		q7=5;
	}
	else{
		q7=90.37* pow(2.7182818, (-0.0169 * v7)) - 15*cos((0.0571*(v7-30))) + 10,22* pow(2.718281828, (-0.231*v7)) -0.8;
	}

    GtkSpinButton *spinbutton17 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton17");
    entry7 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton17);
    const char *entryText7 = gtk_entry_get_text(entry7);
    double v8 = atof(entryText7);

    if(v8>500){
		q8=30;
	}
	else{
		q8= 133.17* (pow(2.7182818, (-0.0027 * v8))) -53.17* (pow(2.7182818 , (-0.0141 * v8))) + ((-6.2*(pow(2.7182818, (-0.00462*v8)))) *sin(0.0146*v8));
	}

    GtkSpinButton *spinbutton18 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton18");
    entry8 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton18);
    const char *entryText8 = gtk_entry_get_text(entry8);
    double v9 = atof(entryText8);

    if(v9>15){
		q9=9;
	}
	else if(v9<=5){
		q9=1;
	}
	else{
		q9=1/(0.0003869*pow(v9 + 0.1815, 2) + 0.01081);
	}
    GtkSpinButton *spinbutton1 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton1");
    entry9 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton1);
    const char *entryText9 = gtk_entry_get_text(entry9);
    double p1 = atof(entryText9);

    GtkSpinButton *spinbutton2 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton2");
    entry10 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton2);
    const char *entryText10 = gtk_entry_get_text(entry10);
    double p2 = atof(entryText10);

    GtkSpinButton *spinbutton3 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton3");
    entry11 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton3);
    const char *entryText11 = gtk_entry_get_text(entry11);
    double p3 = atof(entryText11);

    GtkSpinButton *spinbutton4 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton4");
    entry12 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton4);
    const char *entryText12 = gtk_entry_get_text(entry12);
    double p4 = atof(entryText12);


    GtkSpinButton *spinbutton5 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton5");
    entry13 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton5);
    const char *entryText13 = gtk_entry_get_text(entry13);
    double p5 = atof(entryText13);

    GtkSpinButton *spinbutton6 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton6");
    entry14 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton6);
    const char *entryText14 = gtk_entry_get_text(entry14);
    double p6 = atof(entryText14);

    GtkSpinButton *spinbutton7 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton7");
    entry15 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton7);
    const char *entryText15 = gtk_entry_get_text(entry15);
    double p7 = atof(entryText15);

    GtkSpinButton *spinbutton8 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton8");
    entry16 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton8);
    const char *entryText16 = gtk_entry_get_text(entry16);
    double p8 = atof(entryText16);

    GtkSpinButton *spinbutton9 = (GtkSpinButton*) gtk_builder_get_object(gtkbuilder, "spinbutton9");
    entry17 = (GtkEntry*) gtk_builder_get_object(gtkbuilder, spinbutton9);
    const char *entryText17 = gtk_entry_get_text(entry17);
    double p9 = atof(entryText17);

    qt=( (v1*p1) + (v2*p2) + (v3*p3) + (v4*p4) + (v5*p5) + (v6*p6) + (v7*p7) + (v8*p8) + (v9*p9));

    gtk_widget_show((GtkWidget*)window);
    gtk_main();

    return 0;

}
