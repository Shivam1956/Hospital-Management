#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define K 100
#define L 1000
void PAT_LIST();
void DOC_LIST();
void MOR_LIST();
void MED_LIST();
void menu();
void PAT();
void NPAT();
void MPAT();
void LPAT();
void SPAT();
void STA();
void NSTA();
void MSTA();
void LSTA();
void SSTA();
void INV();
void MOR();
void NMOR();
void LMOR();
void SMOR();
void DAA();
void END();
struct patient
{
    char name[K],gender[K],age[K],bloodgroup[K],admittedin[K],doctor[K],date[K],time[K];
    char reg_no[K];
}pat_old[L],pat_new[L];
struct doctor
{
    char name[K],specialist[K],contact[K];
    char id_no[K];
}doc_old[L],doc_new[L];
struct mortuary
{
    char name[K],age[K],gender[K],bloodgroup[K],date[K],time[K],cabinet_no[K];
    char reg_no[K];
}mor_old[L],mor_new[L];
struct medicine
{
    char name[K];
    int price;
}med[L];
struct appointment
{
    char name[K],gender[K],age[K],bloodgroup[K],appointmentfor[K],doctor[K],date[K],time[K];
}app[L];
void PAT_LIST()
{
    strcpy(pat_old[0].reg_no,"551");
    strcpy(pat_old[0].name,"Pratham Agarwalla");
    strcpy(pat_old[0].gender,"M");
    strcpy(pat_old[0].age,"23");
    strcpy(pat_old[0].bloodgroup,"A+");
    strcpy(pat_old[0].admittedin,"Ophthalmologist");
    strcpy(pat_old[0].doctor,"ASSVLY Yashwanth");
    strcpy(pat_old[0].date,"09/01/2018");
    strcpy(pat_old[0].time,"11:52");
    strcpy(pat_old[1].reg_no,"552");
    strcpy(pat_old[1].name,"Anshuman Singh");
    strcpy(pat_old[1].gender,"M");
    strcpy(pat_old[1].age,"12");
    strcpy(pat_old[1].bloodgroup,"O+");
    strcpy(pat_old[1].admittedin,"Pediatrician");
    strcpy(pat_old[1].doctor,"Shivam");
    strcpy(pat_old[1].date,"01/03/2018");
    strcpy(pat_old[1].time,"08:22");
    strcpy(pat_old[2].reg_no,"553");
    strcpy(pat_old[2].name,"Arnav Sharma");
    strcpy(pat_old[2].gender,"M");
    strcpy(pat_old[2].age,"56");
    strcpy(pat_old[2].bloodgroup,"B+");
    strcpy(pat_old[2].admittedin,"Cardiologist");
    strcpy(pat_old[2].doctor,"Shashwat Prasad");
    strcpy(pat_old[2].date,"22/04/2018");
    strcpy(pat_old[2].time,"01:20");
    strcpy(pat_old[3].reg_no,"554");
    strcpy(pat_old[3].name,"Aryan Chaudhary");
    strcpy(pat_old[3].gender,"F");
    strcpy(pat_old[3].age,"78");
    strcpy(pat_old[3].bloodgroup,"AB-");
    strcpy(pat_old[3].admittedin,"Psychiatrist");
    strcpy(pat_old[3].doctor,"Sarthak Dwivedi");
    strcpy(pat_old[3].date,"12/06/2018");
    strcpy(pat_old[3].time,"05:30");
    strcpy(pat_old[4].reg_no,"555");
    strcpy(pat_old[4].name,"Srinivas B");
    strcpy(pat_old[4].gender,"M");
    strcpy(pat_old[4].age,"18");
    strcpy(pat_old[4].bloodgroup,"A-");
    strcpy(pat_old[4].admittedin,"Gastroenterologist");
    strcpy(pat_old[4].doctor,"Roshan Priyadarshi");
    strcpy(pat_old[4].date,"12/11/2018");
    strcpy(pat_old[4].time,"23:20");
    strcpy(pat_old[5].reg_no,"556");
    strcpy(pat_old[5].name,"PSS.Vivek Kartheek");
    strcpy(pat_old[5].gender,"M");
    strcpy(pat_old[5].age,"39");
    strcpy(pat_old[5].bloodgroup,"AB+");
    strcpy(pat_old[5].admittedin,"Oncologist");
    strcpy(pat_old[5].doctor,"Srikar Vaka");
    strcpy(pat_old[5].date,"30/03/2019");
    strcpy(pat_old[5].time,"15:12");
    strcpy(pat_old[6].reg_no,"557");
    strcpy(pat_old[6].name,"Anuradha Krishnan");
    strcpy(pat_old[6].gender,"F");
    strcpy(pat_old[6].age,"28");
    strcpy(pat_old[6].bloodgroup,"O-");
    strcpy(pat_old[6].admittedin,"Ophthalmologist");
    strcpy(pat_old[6].doctor,"ASSVLY Yashwanth");
    strcpy(pat_old[6].date,"07/04/2019");
    strcpy(pat_old[6].time,"16:25");
    strcpy(pat_old[7].reg_no,"558");
    strcpy(pat_old[7].name,"Male Charanjeeth Kumar");
    strcpy(pat_old[7].gender,"M");
    strcpy(pat_old[7].age,"65");
    strcpy(pat_old[7].bloodgroup,"B-");
    strcpy(pat_old[7].admittedin,"Ophthalmologist");
    strcpy(pat_old[7].doctor,"ASSVLY Yashwanth");
    strcpy(pat_old[7].date,"09/04/2019");
    strcpy(pat_old[7].time,"01:23");
    strcpy(pat_old[8].reg_no,"559");
    strcpy(pat_old[8].name,"Rachaputi Bhargav Narasimha");
    strcpy(pat_old[8].gender,"M");
    strcpy(pat_old[8].age,"48");
    strcpy(pat_old[8].bloodgroup,"A+");
    strcpy(pat_old[8].admittedin,"Cardiologist");
    strcpy(pat_old[8].doctor,"Shashwat Prasad");
    strcpy(pat_old[8].date,"05/05/2019");
    strcpy(pat_old[8].time,"04:59");
    strcpy(pat_old[9].reg_no,"560");
    strcpy(pat_old[9].name,"Priyansh Bhandari");
    strcpy(pat_old[9].gender,"M");
    strcpy(pat_old[9].age,"33");
    strcpy(pat_old[9].bloodgroup,"A-");
    strcpy(pat_old[9].admittedin,"Oncologist");
    strcpy(pat_old[9].doctor,"Srikar Vaka");
    strcpy(pat_old[9].date,"26/07/2019");
    strcpy(pat_old[9].time,"18:27");
    strcpy(pat_old[10].reg_no,"561");
    strcpy(pat_old[10].name,"Mahammad Ashraf Doula Khan");
    strcpy(pat_old[10].gender,"M");
    strcpy(pat_old[10].age,"15");
    strcpy(pat_old[10].bloodgroup,"B+");
    strcpy(pat_old[10].admittedin,"Pediatrician");
    strcpy(pat_old[10].doctor,"Shivam");
    strcpy(pat_old[10].date,"17/08/2019");
    strcpy(pat_old[10].time,"21:42");
    strcpy(pat_old[11].reg_no,"562");
    strcpy(pat_old[11].name,"Machireddy Poorna Pradeep Reddy");
    strcpy(pat_old[11].gender,"M");
    strcpy(pat_old[11].age,"19");
    strcpy(pat_old[11].bloodgroup,"B+");
    strcpy(pat_old[11].admittedin,"Neurologist");
    strcpy(pat_old[11].doctor,"Nikhil Rajput");
    strcpy(pat_old[11].date,"12/09/2019");
    strcpy(pat_old[11].time,"19:11");
    strcpy(pat_old[12].reg_no,"563");
    strcpy(pat_old[12].name,"Nilay Kumar");
    strcpy(pat_old[12].gender,"M");
    strcpy(pat_old[12].age,"12");
    strcpy(pat_old[12].bloodgroup,"O+");
    strcpy(pat_old[12].admittedin,"Pediatrician");
    strcpy(pat_old[12].doctor,"Shivam");
    strcpy(pat_old[12].date,"22/11/2020");
    strcpy(pat_old[12].time,"11:26");
    strcpy(pat_old[13].reg_no,"564");
    strcpy(pat_old[13].name,"Bhargavi Kaza");
    strcpy(pat_old[13].gender,"F");
    strcpy(pat_old[13].age,"32");
    strcpy(pat_old[13].bloodgroup,"O-");
    strcpy(pat_old[13].admittedin,"Neurologist");
    strcpy(pat_old[13].doctor,"Nikhil Rajput");
    strcpy(pat_old[13].date,"28/11/2020");
    strcpy(pat_old[13].time,"22:15");
    strcpy(pat_old[14].reg_no,"565");
    strcpy(pat_old[14].name,"Jagarlamundi Bipin Sai Bhaskar");
    strcpy(pat_old[14].gender,"M");
    strcpy(pat_old[14].age,"55");
    strcpy(pat_old[14].bloodgroup,"AB+");
    strcpy(pat_old[14].admittedin,"Cardiologist");
    strcpy(pat_old[14].doctor,"Shashwat Prasad");
    strcpy(pat_old[14].date,"02/12/2020");
    strcpy(pat_old[14].time,"18:59");
    strcpy(pat_old[15].reg_no,"566");
    strcpy(pat_old[15].name,"Dheeraj G");
    strcpy(pat_old[15].gender,"M");
    strcpy(pat_old[15].age,"51");
    strcpy(pat_old[15].bloodgroup,"O-");
    strcpy(pat_old[15].admittedin,"Cardiologist");
    strcpy(pat_old[15].doctor,"Shashwat Prasad");
    strcpy(pat_old[15].date,"10/12/2020");
    strcpy(pat_old[15].time,"14:23");
    strcpy(pat_old[16].reg_no,"567");
    strcpy(pat_old[16].name,"Ravi Vamsi Krishna");
    strcpy(pat_old[16].gender,"M");
    strcpy(pat_old[16].age,"07");
    strcpy(pat_old[16].bloodgroup,"O+");
    strcpy(pat_old[16].admittedin,"Pediatrician");
    strcpy(pat_old[16].doctor,"Shivam");
    strcpy(pat_old[16].date,"18/12/2020");
    strcpy(pat_old[16].time,"17:28");
    strcpy(pat_old[17].reg_no,"568");
    strcpy(pat_old[17].name,"Anant Sharma");
    strcpy(pat_old[17].gender,"M");
    strcpy(pat_old[17].age,"25");
    strcpy(pat_old[17].bloodgroup,"AB-");
    strcpy(pat_old[17].admittedin,"Oncologist");
    strcpy(pat_old[17].doctor,"Srikar Vaka");
    strcpy(pat_old[17].date,"20/12/2020");
    strcpy(pat_old[17].time,"08;35");
    strcpy(pat_old[18].reg_no,"569");
    strcpy(pat_old[18].name,"Sachin Kumar");
    strcpy(pat_old[18].gender,"M");
    strcpy(pat_old[18].age,"36");
    strcpy(pat_old[18].bloodgroup,"O-");
    strcpy(pat_old[18].admittedin,"Psychiatrist");
    strcpy(pat_old[18].doctor,"Sarthak Dwivedi");
    strcpy(pat_old[18].date,"31/12/2020");
    strcpy(pat_old[18].time,"10:17");
    strcpy(pat_old[19].reg_no,"570");
    strcpy(pat_old[19].name,"Cheedella S V Abhinava Sai");
    strcpy(pat_old[19].gender,"M");
    strcpy(pat_old[19].age,"35");
    strcpy(pat_old[19].bloodgroup,"A-");
    strcpy(pat_old[19].admittedin,"GAstroenterologist");
    strcpy(pat_old[19].doctor,"Roshan Priyadarshi");
    strcpy(pat_old[19].date,"08/01/2021");
    strcpy(pat_old[19].time,"15:44");
    strcpy(pat_old[20].reg_no,"571");
    strcpy(pat_old[20].name,"Lingeshwanan V");
    strcpy(pat_old[20].gender,"M");
    strcpy(pat_old[20].age,"31");
    strcpy(pat_old[20].bloodgroup,"B+");
    strcpy(pat_old[20].admittedin,"Psychiatrist");
    strcpy(pat_old[20].doctor,"Sarthak Dwivedi");
    strcpy(pat_old[20].date,"23/01/2021");
    strcpy(pat_old[20].time,"22:51");
    strcpy(pat_old[21].reg_no,"572");
    strcpy(pat_old[21].name,"Kurella Chaitanya");
    strcpy(pat_old[21].gender,"M");
    strcpy(pat_old[21].age,"22");
    strcpy(pat_old[21].bloodgroup,"B+");
    strcpy(pat_old[21].admittedin,"Oncologist");
    strcpy(pat_old[21].doctor,"Srikar Vaka");
    strcpy(pat_old[21].date,"30/01/2021");
    strcpy(pat_old[21].time,"11:24");
    strcpy(pat_old[22].reg_no,"573");
    strcpy(pat_old[22].name,"Kushal Srivastava");
    strcpy(pat_old[22].gender,"M");
    strcpy(pat_old[22].age,"19");
    strcpy(pat_old[22].bloodgroup,"O+");
    strcpy(pat_old[22].admittedin,"Neurologist");
    strcpy(pat_old[22].doctor,"Nikhil Rajput");
    strcpy(pat_old[22].date,"19/02/2021");
    strcpy(pat_old[22].time,"17:20");
    strcpy(pat_old[23].reg_no,"574");
    strcpy(pat_old[23].name,"Munshi Afroze Alam");
    strcpy(pat_old[23].gender,"M");
    strcpy(pat_old[23].age,"23");
    strcpy(pat_old[23].bloodgroup,"B-");
    strcpy(pat_old[23].admittedin,"Psychiatrist");
    strcpy(pat_old[23].doctor,"Sarthak Dwivedi");
    strcpy(pat_old[23].date,"25/05/2021");
    strcpy(pat_old[23].time,"14:15");
    strcpy(pat_old[24].reg_no,"575");
    strcpy(pat_old[24].name,"Varikoti Likith Bharadwaj");
    strcpy(pat_old[24].gender,"M");
    strcpy(pat_old[24].age,"62");
    strcpy(pat_old[24].bloodgroup,"B+");
    strcpy(pat_old[24].admittedin,"Cardiologist");
    strcpy(pat_old[24].doctor,"Shashwat Prasad");
    strcpy(pat_old[24].date,"12/06/2021");
    strcpy(pat_old[24].time,"21:28");
    strcpy(pat_old[25].reg_no,"576");
    strcpy(pat_old[25].name,"Mohit Sharma");
    strcpy(pat_old[25].gender,"M");
    strcpy(pat_old[25].age,"75");
    strcpy(pat_old[25].bloodgroup,"B-");
    strcpy(pat_old[25].admittedin,"Neurologist");
    strcpy(pat_old[25].doctor,"Nikhil Rajput");
    strcpy(pat_old[25].date,"02/08/2021");
    strcpy(pat_old[25].time,"07:25");
    strcpy(pat_old[26].reg_no,"577");
    strcpy(pat_old[26].name,"Mayank Mukherjee");
    strcpy(pat_old[26].gender,"M");
    strcpy(pat_old[26].age,"30");
    strcpy(pat_old[26].bloodgroup,"B+");
    strcpy(pat_old[26].admittedin,"Gastroenterologist");
    strcpy(pat_old[26].doctor,"Roshan Priyadarshi");
    strcpy(pat_old[26].date,"23/09/2021");
    strcpy(pat_old[26].time,"02:43");
    strcpy(pat_old[27].reg_no,"578");
    strcpy(pat_old[27].name,"Vuluvabeeti Sowmya Sarojini");
    strcpy(pat_old[27].gender,"F");
    strcpy(pat_old[27].age,"44");
    strcpy(pat_old[27].bloodgroup,"AB+");
    strcpy(pat_old[27].admittedin,"Gastroenterologist");
    strcpy(pat_old[27].doctor,"Roshan Priyadarshi");
    strcpy(pat_old[27].date,"11/12/2021");
    strcpy(pat_old[27].time,"11:30");
    strcpy(pat_old[28].reg_no,"579");
    strcpy(pat_old[28].name,"CH Malvika Reddy");
    strcpy(pat_old[28].gender,"F");
    strcpy(pat_old[28].age,"58");
    strcpy(pat_old[28].bloodgroup,"A+");
    strcpy(pat_old[28].admittedin,"Oncologist");
    strcpy(pat_old[28].doctor,"Srikar Vaka");
    strcpy(pat_old[28].date,"15/12/2021");
    strcpy(pat_old[28].time,"05:45");
    strcpy(pat_old[29].reg_no,"580");
    strcpy(pat_old[29].name,"Prachi");
    strcpy(pat_old[29].gender,"F");
    strcpy(pat_old[29].age,"50");
    strcpy(pat_old[29].bloodgroup,"B+");
    strcpy(pat_old[29].admittedin,"Psychiatrist");
    strcpy(pat_old[29].doctor,"Sarthak Dwivedi");
    strcpy(pat_old[29].date,"19/12/2021");
    strcpy(pat_old[29].time,"12:00");
}
void DOC_LIST()
{
    strcpy(doc_old[0].id_no,"001");
    strcpy(doc_old[0].name,"Shashwat Prasad");
    strcpy(doc_old[0].specialist,"Cardiologist");
    strcpy(doc_old[0].contact,"0123456789");
    strcpy(doc_old[1].id_no,"002");
    strcpy(doc_old[1].name,"Roshan Priyadarshi");
    strcpy(doc_old[1].specialist,"Gastroenterologist");
    strcpy(doc_old[1].contact,"1234567890");
    strcpy(doc_old[2].id_no,"003");
    strcpy(doc_old[2].name,"Sarthak Dwivedi");
    strcpy(doc_old[2].specialist,"Psychiatrist");
    strcpy(doc_old[2].contact,"2345678901");
    strcpy(doc_old[3].id_no,"004");
    strcpy(doc_old[3].name,"ASSVLY Yashwanth");
    strcpy(doc_old[3].specialist,"Ophthalmologist");
    strcpy(doc_old[3].contact,"3456789012");
    strcpy(doc_old[4].id_no,"005");
    strcpy(doc_old[4].name,"Srikar Vaka");
    strcpy(doc_old[4].specialist,"Oncologist");
    strcpy(doc_old[4].contact,"4567890123");
    strcpy(doc_old[5].id_no,"006");
    strcpy(doc_old[5].name,"Shivam");
    strcpy(doc_old[5].specialist,"Pediatrician");
    strcpy(doc_old[5].contact,"5678901234");
    strcpy(doc_old[6].id_no,"007");
    strcpy(doc_old[6].name,"Nikhil Rajput");
    strcpy(doc_old[6].specialist,"Neurologist");
    strcpy(doc_old[6].contact,"6789012345");
}
void MOR_LIST()
{
    strcpy(mor_old[0].reg_no,"289");
    strcpy(mor_old[0].cabinet_no,"01");
    strcpy(mor_old[0].name,"Hitler");
    strcpy(mor_old[0].age,"68");
    strcpy(mor_old[0].gender,"M");
    strcpy(mor_old[0].bloodgroup,"O-");
    strcpy(mor_old[0].date,"15/09/2017");
    strcpy(mor_old[0].time,"15:47");
    strcpy(mor_old[1].reg_no,"299");
    strcpy(mor_old[1].cabinet_no,"02");
    strcpy(mor_old[1].name,"Napoleon");
    strcpy(mor_old[1].age,"47");
    strcpy(mor_old[1].gender,"M");
    strcpy(mor_old[1].bloodgroup,"A+");
    strcpy(mor_old[1].date,"25/11/2017");
    strcpy(mor_old[1].time,"19:03");
    strcpy(mor_old[2].reg_no,"348");
    strcpy(mor_old[2].cabinet_no,"03");
    strcpy(mor_old[2].name,"Jennifer Lopez");
    strcpy(mor_old[2].age,"55");
    strcpy(mor_old[2].gender,"F");
    strcpy(mor_old[2].bloodgroup,"AB+");
    strcpy(mor_old[2].date,"17/01/2018");
    strcpy(mor_old[2].time,"09:22");
    strcpy(mor_old[3].reg_no,"366");
    strcpy(mor_old[3].cabinet_no,"04");
    strcpy(mor_old[3].name,"Scarlet Johansson");
    strcpy(mor_old[3].age,"25");
    strcpy(mor_old[3].gender,"F");
    strcpy(mor_old[3].bloodgroup,"B+");
    strcpy(mor_old[3].date,"25/09/2018");
    strcpy(mor_old[3].time,"22:58");
    strcpy(mor_old[4].reg_no,"508");
    strcpy(mor_old[4].cabinet_no,"05");
    strcpy(mor_old[4].name,"Zeenat Khalifa");
    strcpy(mor_old[4].age,"32");
    strcpy(mor_old[4].gender,"F");
    strcpy(mor_old[4].bloodgroup,"O-");
    strcpy(mor_old[4].date,"05/10/2018");
    strcpy(mor_old[4].time,"12:25");
}
void MED_LIST()
{
    strcpy(med[0].name,"Amlodipine");
    med[0].price=30;
    strcpy(med[1].name,"Atenolol");
    med[1].price=58;
    strcpy(med[2].name,"Pantoprazole");
    med[2].price=100;
    strcpy(med[3].name,"Domperidone");
    med[3].price=280;
    strcpy(med[4].name,"Trazodone");
    med[4].price=25;
    strcpy(med[5].name,"Escitalopram");
    med[5].price=567;
    strcpy(med[6].name,"Acyclovir");
    med[6].price=12;
    strcpy(med[7].name,"Ophthalmic");
    med[7].price=28;
    strcpy(med[8].name,"Avastin Bicnu");
    med[8].price=69;
    strcpy(med[9].name,"Braftov");
    med[9].price=170;
    strcpy(med[10].name,"Formoterol");
    med[10].price=89;
    strcpy(med[11].name,"Montelukast");
    med[11].price=88;
    strcpy(med[12].name,"Clonazepam");
    med[12].price=256;
    strcpy(med[13].name,"Oxcarbazepine");
    med[13].price=74;
    strcpy(med[14].name,"MuscleBlaze");
    med[14].price=8;
    strcpy(med[15].name,"Health Kart Vitals");
    med[15].price=5;
    strcpy(med[16].name,"Paracetamol");
    med[16].price=2;
    strcpy(med[17].name,"Norflex TZ");
    med[17].price=15;
    strcpy(med[18].name,"Methaphor");
    med[18].price=9;
    strcpy(med[19].name,"Amoxicillin");
    med[19].price=6;
}
void main()
{
    system("COLOR E4");
    menu();
}
void menu()
{
    printf("\n\n\n");
    printf("  **       **        **  **********  **          **********  **********  ****       ****  **********\n");
    printf("   **     ** **     **   **          **          **          **      **  ** **     ** **  **\n");
    printf("    **   **   **   **    **********  **          **          **      **  **  **   **  **  **********\n");
    printf("     ** **     ** **     **          **          **          **      **  **   ** **   **  **\n");
    printf("      **        **       **********  **********  **********  **********  **    **     **  **********\n");
    printf("\n\n");
    printf("                                   **********  **********\n");
    printf("                                       **      **      **\n");
    printf("                                       **      **      **\n");
    printf("                                       **      **      **\n");
    printf("                                       **      **********\n");
    printf("\n\n");
    printf("                **********      ****          ****      ****    **  **************\n");
    printf("                **             **  **        **  **     ** **   **  **\n");
    printf("                **********    ********      ********    **  **  **  **   *********\n");
    printf("                **           **      **    **      **   **   ** **  **      **  **\n");
    printf("                **          **        **  **        **  **    ****  **********  **\n");
    printf("\n\n");
    printf("    **      **  **********  ********** ********** **********  **********      ****      **\n");
    printf("    **      **  **      **  **         **      **     **          **         **  **     **\n");
    printf("    **********  **      **  ********** **********     **          **        ********    **\n");
    printf("    **      **  **      **          ** **             **          **       **      **   **\n");
    printf("    **      **  **********  ********** **         **********      **      **        **  **********\n");
    printf("\n");
    printf("\n\n\n");
    printf("          --------------------------------\n");
    printf("          FAANG HOSPITAL MANAGEMENT SYSTEM\n");
    printf("          --------------------------------\n");
    printf("\n");
    printf("          1. Patient System\n");
    printf("          2. Staff System\n");
    printf("          3. Inventory System\n");
    printf("          4. Mortuary System\n");
    printf("          5. Doctor Appointment Application\n");
    printf("          6. Exit\n");
    printf("\n");
    char choice;
    printf("          Please Select Your Choice - ");
    scanf("%s",&choice);
    switch(choice)
    {
    case '1':
        PAT();
        break;
    case '2':
        STA();
        break;
    case '3':
        INV();
        break;
    case '4':
        MOR();
        break;
    case '5':
        DAA();
        break;
    case '6':
        END();
        break;
    }
}
void PAT()
{
   char pt;
   printf("\n\n\n");
   printf("          --------------------------\n");
   printf("          Welcome To Patients System\n");
   printf("          --------------------------\n");
   printf("\n");
   printf("          1. Entry of New Patient\n");
   printf("          2. Modifying Existing Patients Details\n");
   printf("          3. Display the List of Patients\n");
   printf("          4. Search for Patient Details\n");
   printf("          5. Return to the Main Menu\n");
   printf("\n");
   printf("          Please Select Your Choice - ");
   scanf("%s",&pt);
   switch(pt)
   {
   case '1':
       NPAT();
       break;
   case '2':
       MPAT();
       break;
   case '3':
       LPAT();
       break;
   case '4':
       SPAT();
       break;
   case '5':
       main();
       break;
   }
}
void NPAT()
{
    PAT_LIST();
    char entry_yes_no[K],another;
    int count1;
    printf("\n\n\n");
    printf("          ---------------------------------------\n");
    printf("          Please Enter the Details of New Patient\n");
    printf("          ---------------------------------------\n");
    printf("\n");
    another='Y';
    while(another=='Y')
    {
    a:
    printf("          Enter Registration Number - ");
    scanf("%s",pat_new[count1].reg_no);
    printf("          Enter Name - ");
    scanf("%s",pat_new[count1].name);
    printf("          Enter Gender (M/F/T) - ");
    scanf("%s",pat_new[count1].gender);
    printf("          Enter Age - ");
    scanf("%s",pat_new[count1].age);
    printf("          Enter Blood Group (A+/A-/B+/B-/O+/O-/AB+/AB-) - ");
    scanf("%s",pat_new[count1].bloodgroup);
    printf("          Enter Admitted In (Cardiologist/Gastroenterologist/Psychiatrist/Ophthalmologist/Oncologist/Pediatrician/Neurologist) - ");
    scanf("%s",pat_new[count1].admittedin);
    if(strcmp(pat_new[count1].admittedin,"Cardiologist")==0)
        printf("\n            =>Doctor Appointed - Shashwat Prasad\n");
    else if(strcmp(pat_new[count1].admittedin,"Gastroenterologist")==0)
        printf("\n            =>Doctor Appointed - Roshan Priyadarshi\n");
    else if(strcmp(pat_new[count1].admittedin,"Psychiatrist")==0)
        printf("\n            =>Doctor Appointed - Sarthak Dwivedi\n");
    else if(strcmp(pat_new[count1].admittedin,"Ophthalmologist")==0)
        printf("\n            =>Doctor Appointed - ASSVLY Yashwanth\n");
    else if(strcmp(pat_new[count1].admittedin,"Oncologist")==0)
        printf("\n            =>Doctor Appointed - Srikar Vaka\n");
    else if(strcmp(pat_new[count1].admittedin,"Pediatrician")==0)
        printf("\n            =>Doctor Appointed - Shivam\n");
    else if(strcmp(pat_new[count1].admittedin,"Neurologist")==0)
        printf("\n            =>Doctor Appointed - Nikhil Rajput\n");
    else
    {
        printf("\n          Sorry Doctor is Not Available\n");
        printf("          Handled by Most Appropriate Doctor\n");
    }
    printf("\n");
    printf("          Enter Date of Admit (DD/MM/YYYY) - ");
    scanf("%s",pat_new[count1].date);
    printf("          Enter Time of Admit (HH:MM) - ");
    scanf("%s",pat_new[count1].time);
    count1++;
    for(int i=0;i<(count1);i++)
    {
        printf("\n\n");
        printf("          New Patient Details :-\n");
        printf("          Registration Number - %s\n",pat_new[i].reg_no);
        printf("          Name - %s\n",pat_new[i].name);
        printf("          Gender - %s\n",pat_new[i].gender);
        printf("          Age - %s\n",pat_new[i].age);
        printf("          Blood Group - %s\n",pat_new[i].bloodgroup);
        printf("          Admitted In - %s\n",pat_new[i].admittedin);
        printf("          Date - %s\n",pat_new[i].date);
        printf("          Time - %s\n",pat_new[i].time);
        printf("\n");
    }
    printf("\n          Do You Want to Enter More Patient Details ? (Yes/No) - ");
    scanf("%s",entry_yes_no);
    if(strcmp(entry_yes_no,"Yes")==0)
    {
        printf("\n\n");
        goto a;
    }
    else
        main();
    }
}
void MPAT()
{
    PAT_LIST();
    int modify_1,select_1;
    char change_1[K],modify_yes_no[K],another;
    printf("\n\n\n");
    printf("          -----------------------------\n");
    printf("          Modifying Details of a Patient\n");
    printf("          -----------------------------\n");
    printf("\n");
    another='Y';
    while(another=='Y')
    {
    b:
    printf("          Please Select the Patient to Whom You Wanted To Modify (Eg:551=0,552=1,.....) - ");
    scanf("%d",&modify_1);
    printf("\n\n");
    printf("          Before Modifying\n");
    printf("\n");
        printf("          Registration Number - %s\n",pat_old[modify_1].reg_no);
        printf("          Name - %s\n",pat_old[modify_1].name);
        printf("          Gender - %s\n",pat_old[modify_1].gender);
        printf("          Age - %s\n",pat_old[modify_1].age);
        printf("          Blood Group - %s\n",pat_old[modify_1].bloodgroup);
        printf("          Admitted In - %s\n",pat_old[modify_1].admittedin);
        printf("          Doctor Appointed - %s\n",pat_old[modify_1].doctor);
        printf("          Date - %s\n",pat_old[modify_1].date);
        printf("          Time - %s\n",pat_old[modify_1].time);
        printf("\n");
    for(int i=0;i<30;i++)
    {
        if(i==modify_1)
        {
            printf("          Please Select the Number for Respective Changing option (1-Name/2-Gender/3-Age/4-Blood Group/5-Date/6-Time) - ");
            scanf("%d",&select_1);
            switch(select_1)
            {
            case 1:
                printf("\n");
                printf("          Enter Correct Name - ");
                scanf("%s",change_1);
                strcpy(pat_old[i].name,change_1);
                break;
            case 2:
                printf("\n");
                printf("          Enter Correct Gender (M/F/T) - ");
                scanf("%s",change_1);
                strcpy(pat_old[i].gender,change_1);
                break;
            case 3:
                printf("\n");
                printf("          Enter Correct Age - ");
                scanf("%s",change_1);
                strcpy(pat_old[i].age,change_1);
                break;
            case 4:
                printf("\n");
                printf("          Enter Correct Blood Group - ");
                scanf("%s",change_1);
                strcpy(pat_old[i].bloodgroup,change_1);
                break;
            case 5:
                printf("\n");
                printf("          Enter Correct Date - ");
                scanf("%s",change_1);
                strcpy(pat_new[i].date,change_1);
                break;
            case 6:
                printf("\n");
                printf("          Enter Correct Time - ");
                scanf("%s",change_1);
                strcpy(pat_old[i].time,change_1);
                break;
            default:
                printf("\n");
                printf("          Invalid Entry\n");
                printf("\n");
            }
            printf("\n");
            printf("          After Modifying\n");
            printf("\n");
                printf("          Registration Number - %s\n",pat_old[modify_1].reg_no);
                printf("          Name - %s\n",pat_old[modify_1].name);
                printf("          Gender - %s\n",pat_old[modify_1].gender);
                printf("          Age - %s\n",pat_old[modify_1].age);
                printf("          Blood Group - %s\n",pat_old[modify_1].bloodgroup);
                printf("          Admitted In - %s\n",pat_old[modify_1].admittedin);
                printf("          Doctor Appointed - %s\n",pat_old[modify_1].doctor);
                printf("          Date - %s\n",pat_old[modify_1].date);
                printf("          Time - %s\n",pat_old[modify_1].time);
                printf("\n");
        }
    }
    printf("\n          Do You Want to Modify More Patient Details ? (Yes/No) - ");
    scanf("%s",modify_yes_no);
    if(strcmp(modify_yes_no,"Yes")==0)
    {
        printf("\n\n");
        goto b;
    }
    else
        main();
    }
}
void LPAT()
{
    PAT_LIST();
    int return_1;
    printf("\n\n\n");
    printf("          --------------\n");
    printf("          Patients List\n");
    printf("          --------------\n");
    for(int i=0;i<30;i++)
    {
        printf("\n");
        printf("          Registration Number - %s\n",pat_old[i].reg_no);
        printf("          Name - %s\n",pat_old[i].name);
        printf("          Gender - %s\n",pat_old[i].gender);
        printf("          Age - %s\n",pat_old[i].age);
        printf("          Blood Group - %s\n",pat_old[i].bloodgroup);
        printf("          Admitted In - %s\n",pat_old[i].admittedin);
        printf("          Doctor Appointed - %s\n",pat_old[i].doctor);
        printf("          Date - %s\n",pat_old[i].date);
        printf("          Time - %s\n",pat_old[i].time);
        printf("\n");
    }
    printf("\n          Enter Any Number to Return to the Main Menu - ");
    scanf("%d",&return_1);
    main();
}
void SPAT()
{
    PAT_LIST();
    char search_reg_1[K],another,search_yes_no[K];
    int count5=0;
    printf("\n\n\n");
    printf("          ----------------------------\n");
    printf("          Searching of Patient Details\n");
    printf("          ----------------------------\n");
    printf("\n");
    another='Y';
    while(another=='Y')
    {
    aa:
    printf("          Please Enter the Registration Number - ");
    scanf("%s",search_reg_1);
    for(int i=0;i<30;i++)
    {
        if(strcmp(search_reg_1,pat_old[i].reg_no)==0)
        {
            printf("\n");
            printf("          Name - %s\n",pat_old[i].name);
            printf("          Gender - %s\n",pat_old[i].gender);
            printf("          Age - %s\n",pat_old[i].age);
            printf("          Blood Group - %s\n",pat_old[i].bloodgroup);
            printf("          Admitted In - %s\n",pat_old[i].admittedin);
            printf("          Doctor Appointed - %s\n",pat_old[i].doctor);
            printf("          Date - %s\n",pat_old[i].date);
            printf("          Time - %s\n",pat_old[i].time);
            break;
        }
        else
            count5++;
    }
    if(count5>=30)
    {
        printf("\n");
        printf("          Registration Number Not Found");
    }
    printf("\n");
    printf("\n          Do You Want to Search More Patient Details ? (Yes/No) - ");
    scanf("%s",search_yes_no);
    if(strcmp(search_yes_no,"Yes")==0)
    {
        printf("\n\n");
        goto aa;
    }
    else
        main();
    }
}
void STA()
{
   char st;
   printf("\n\n\n");
   printf("          ------------------------\n");
   printf("          Welcome To Staffs System\n");
   printf("          ------------------------\n");
   printf("\n");
   printf("          1. Entry of New Staff\n");
   printf("          2. Modifying Existing Staff Details\n");
   printf("          3. Display the List of Staffs\n");
   printf("          4. Search for Staff Details\n");
   printf("          5. Return to the Main Menu\n");
   printf("\n");
   printf("          Please Select Your Choice - ");
   scanf("%s",&st);
   switch(st)
   {
   case '1':
       NSTA();
       break;
   case '2':
       MSTA();
       break;
   case '3':
       LSTA();
       break;
   case '4':
       SSTA();
       break;
   case '5':
       main();
       break;
   }
}
void NSTA()
{
    DOC_LIST();
    char entry_yes_no[K],another;
    int count2;
    printf("\n\n\n");
    printf("          ---------------------------------------\n");
    printf("          Please Enter the Details of New Staff\n");
    printf("          ---------------------------------------\n");
    printf("\n");
    another='Y';
    while(another=='Y')
    {
    c:
    printf("          Enter ID Number - ");
    scanf("%s",doc_new[count2].id_no);
    printf("          Enter Name - ");
    scanf("%s",doc_new[count2].name);
    printf("          Enter Specialisation - ");
    scanf("%s",doc_new[count2].specialist);
    printf("          Enter Contact - ");
    scanf("%s",doc_new[count2].contact);
    count2++;
    for(int i=0;i<(count2);i++)
    {
        printf("\n");
        printf("          ID Number - %s\n",doc_new[i].id_no);
        printf("          Name - %s\n",doc_new[i].name);
        printf("          Specialisation - %s\n",doc_new[i].specialist);
        printf("          Contact - %s\n",doc_new[i].contact);
        printf("\n");
    }
    printf("\n          Do You Want to Enter More Staff Details ? (Yes/No) - ");
    scanf("%s",entry_yes_no);
    if(strcmp(entry_yes_no,"Yes")==0)
    {
        printf("\n\n");
        goto c;
    }
    else
        main();
    }
}
void MSTA()
{
    DOC_LIST();
    int modify_2,select_2;
    char change_2[K],modify_yes_no[K],another;
    printf("\n\n\n");
    printf("          -----------------------------\n");
    printf("          Modifying Details of a Staff\n");
    printf("          -----------------------------\n");
    printf("\n");
    another='Y';
    while(another=='Y')
    {
    d:
    printf("          Please Select the Staff to Whom You Wanted To Modify (Eg:001=0,002=1,.....) - ");
    scanf("%d",&modify_2);
    printf("\n\n");
    printf("          Before Modifying\n");
        printf("\n");
        printf("          ID Number - %s\n",doc_old[modify_2].id_no);
        printf("          Name - %s\n",doc_old[modify_2].name);
        printf("          Specialisation - %s\n",doc_old[modify_2].specialist);
        printf("          Contact - %s\n",doc_old[modify_2].contact);
        printf("\n");
    for(int i=0;i<7;i++)
    {
        if(i==modify_2)
        {
            printf("          Please Select the Number for Respective Changing option (1-Name/2-Specialisation/3-Contact) - ");
            scanf("%d",&select_2);
            switch(select_2)
            {
            case 1:
                printf("\n");
                printf("          Enter Correct Name - ");
                scanf("%s",change_2);
                strcpy(doc_old[i].name,change_2);
                break;
            case 2:
                printf("\n");
                printf("          Enter Correct Specialisation - ");
                scanf("%s",change_2);
                strcpy(doc_old[i].specialist,change_2);
                break;
            case 3:
                printf("\n");
                printf("          Enter Correct Contact - ");
                scanf("%s",change_2);
                strcpy(doc_old[i].contact,change_2);
                break;
            default:
                printf("\n");
                printf("          Invalid Entry");
            }
            printf("\n\n");
            printf("          After Modifying\n");
            printf("\n");
                    printf("          ID Number - %s\n",doc_old[modify_2].id_no);
                    printf("          Name - %s\n",doc_old[modify_2].name);
                    printf("          Specialisation - %s\n",doc_old[modify_2].specialist);
                    printf("          Contact - %s\n",doc_old[modify_2].contact);
                    printf("\n");
        }
    }
    printf("\n          Do You Want to Modify More Staff Details ? (Yes/No) - ");
    scanf("%s",modify_yes_no);
    if(strcmp(modify_yes_no,"Yes")==0)
    {
        printf("\n\n");
        goto d;
    }
    else
        main();
    }
}
void LSTA()
{
    DOC_LIST();
    int return_2;
    printf("\n\n");
    printf("          ----------\n");
    printf("          Staff List\n");
    printf("          ----------\n");
    for(int i=0;i<7;i++)
        {
            printf("\n");
            printf("          ID Number - %s\n",doc_old[i].id_no);
            printf("          Name - %s\n",doc_old[i].name);
            printf("          Specialisation - %s\n",doc_old[i].specialist);
            printf("          Contact - %s\n",doc_old[i].contact);
            printf("\n");
        }
    printf("\n");
    printf("          Enter Any Number to Return to the Main Menu - ");
    scanf("%d",&return_2);
    main();
}
void SSTA()
{
    DOC_LIST();
    char search_reg_2[K],another,search_yes_no[K];
    int count6=0;
    printf("\n\n\n");
    printf("          -----------------------\n");
    printf("          Searching Staff Details\n");
    printf("          -----------------------\n");
    printf("\n");
    another='Y';
    while(another=='Y')
    {
    ab:
    printf("          Please Enter the ID Number - ");
    scanf("%s",search_reg_2);
    for(int i=0;i<7;i++)
    {
        if(strcmp(search_reg_2,doc_old[i].id_no)==0)
        {
            printf("\n");
            printf("          ID Number - %s\n",doc_old[i].id_no);
            printf("          Name - %s\n",doc_old[i].name);
            printf("          Specialisation - %s\n",doc_old[i].specialist);
            printf("          Contact - %s\n",doc_old[i].contact);
            break;
        }
        else
            count6++;
    }
    if(count6==7)
        printf("\n          ID Number Not Found");
    printf("\n");
    printf("\n          Do You Want to Search More Staff Details ? (Yes/No) - ");
    scanf("%s",search_yes_no);
    if(strcmp(search_yes_no,"Yes")==0)
    {
        printf("\n\n");
        goto ab;
    }
    else
        main();
    }
}
void INV()
{
    MED_LIST();
    char medicine[K],another,cost_yes_no[K];
    printf("\n\n\n");
    printf("          --------------------\n");
    printf("          Welcome to Inventory\n");
    printf("          --------------------\n");
    printf("\n");
    for(int i=0;i<20;i++)
    {
        printf("          Name - %s\n",med[i].name);
        printf("          Price - %d\n",med[i].price);
        printf("\n\n");
    }
    int sum=0,price;
    another='Y';
    while(another=='Y')
    {
    o:
        printf("          Enter the Medicine Name - ");
        scanf("%s",medicine);
        for(int i=0;i<30;i++)
        {
            if(strcmp(medicine,med[i].name)==0)
            {
                printf("\n          Price - %d\n",med[i].price);
                printf("\n          Enter the Quantity Required - ");
                scanf("%d",&price);
                sum+=med[i].price*price;
            }
        }
        printf("\n");
        printf("            =>Total Price - %d\n",sum);
        printf("\n");
    printf("\n          Do You Want to Buy More Medicine ? (Yes/No) - ");
    scanf("%s",cost_yes_no);
    if(strcmp(cost_yes_no,"Yes")==0)
    {
        printf("\n\n");
        goto o;
    }
    else
        main();
    }
}
void MOR()
{
   char mo;
   printf("\n\n\n");
   printf("          --------------------------\n");
   printf("          Welcome To Mortuary System\n");
   printf("          --------------------------\n");
   printf("\n");
   printf("          1. New Entry\n");
   printf("          2. Display the List of Staffs\n");
   printf("          3. Search for Staff Details\n");
   printf("          4. Return to the Main Menu\n");
   printf("\n");
   printf("          Please Select Your Choice - ");
   scanf("%s",&mo);
   switch(mo)
   {
   case '1':
       NMOR();
       break;
   case '2':
       LMOR();
       break;
   case '3':
       SMOR();
       break;
   case '4':
       main();
       break;
   }
}
void NMOR()
{
    MOR_LIST();
    char entry_yes_no[K],another;
    int count3;
    printf("\n\n\n");
    printf("          ------------------------\n");
    printf("          Please Enter the Details\n");
    printf("          ------------------------\n");
    printf("\n");
    another='Y';
    while(another=='Y')
    {
    e:
    printf("          Enter Registration Number - ");
    scanf("%s",mor_new[count3].reg_no);
    printf("          Enter Cabinet Number - ");
    scanf("%s",mor_new[count3].cabinet_no);
    printf("          Enter Name - ");
    scanf("%s",mor_new[count3].name);
    printf("          Enter Age - ");
    scanf("%s",mor_new[count3].age);
    printf("          Enter Gender (M/F/T) - ");
    scanf("%s",mor_new[count3].gender);
    printf("          Enter Blood Group (A+/A-/B+/B-/O+/O-/AB+/AB-) - ");
    scanf("%s",mor_new[count3].bloodgroup);
    printf("          Enter Date (DD/MM/YYYY) - ");
    scanf("%s",mor_new[count3].date);
    printf("          Enter Time (HH:MM) - ");
    scanf("%s",mor_new[count3].time);
    count3++;
    printf("\n\n");
    printf("          Recent Entry in Mortuary");
    printf("\n");
    for(int i=0;i<(count3);i++)
    {
        printf("\n");
        printf("          Registration Number - %s\n",mor_new[i].reg_no);
        printf("          Cabinet Number - %s\n",mor_new[i].cabinet_no);
        printf("          Name - %s\n",mor_new[i].name);
        printf("          Age - %s\n",mor_new[i].age);
        printf("          Gender - %s\n",mor_new[i].gender);
        printf("          Blood Group - %s\n",mor_new[i].bloodgroup);
        printf("          Date - %s\n",mor_new[i].date);
        printf("          Time - %s\n",mor_new[i].time);
        printf("\n");
    }
    printf("\n          Do You Want to Enter More Staff Details ? (Yes/No) - ");
    scanf("%s",entry_yes_no);
    if(strcmp(entry_yes_no,"Yes")==0)
    {
        printf("\n\n");
        goto e;
    }
    else
        main();
    }
}
void LMOR()
{
    MOR_LIST();
    int return_3;
    printf("\n\n\n");
    printf("          -------------\n");
    printf("          Mortuary List\n");
    printf("          -------------\n");
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("\n");
        printf("          Registration Number - %s\n",mor_old[i].reg_no);
        printf("          Cabinet Number - %s\n",mor_old[i].cabinet_no);
        printf("          Name - %s\n",mor_old[i].name);
        printf("          Age - %s\n",mor_old[i].age);
        printf("          Gender - %s\n",mor_old[i].gender);
        printf("          Blood Group - %s\n",mor_old[i].bloodgroup);
        printf("          Date - %s\n",mor_old[i].date);
        printf("          Time - %s\n",mor_old[i].time);
        printf("\n");
    }
    printf("\n");
    printf("          Enter Any Number to Return to the Main Menu - ");
    scanf("%d",&return_3);
    main();
}
void SMOR()
{
    MOR_LIST();
    char search_reg_3[K],another,search_yes_no[K];
    int count7=0;
    printf("\n\n\n");
    printf("          ---------------------------------------------------\n");
    printf("          Searching Details of Respective Registration Number\n");
    printf("          ---------------------------------------------------\n");
    printf("\n");
    another='Y';
    while(another=='Y')
    {
    ac:
    printf("          Please Enter the Registration Number - ");
    scanf("%s",search_reg_3);
    for(int i=0;i<5;i++)
    {
        if(strcmp(search_reg_3,mor_old[i].reg_no)==0)
        {
            printf("\n");
            printf("          Registration Number - %s\n",mor_old[i].reg_no);
            printf("          Cabinet Number - %s\n",mor_old[i].cabinet_no);
            printf("          Name - %s\n",mor_old[i].name);
            printf("          Age - %s\n",mor_old[i].age);
            printf("          Gender - %s\n",mor_old[i].gender);
            printf("          Blood Group - %s\n",mor_old[i].bloodgroup);
            printf("          Date - %s\n",mor_old[i].date);
            printf("          Time - %s\n",mor_old[i].time);
            break;
        }
        else
            count7++;
    }
    if(count7==5)
        printf("          Registration Number Not Found");
    printf("\n");
    printf("\n          Do You Want to Search More Details ? (Yes/No) - ");
    scanf("%s",search_yes_no);
    if(strcmp(search_yes_no,"Yes")==0)
    {
        printf("\n\n");
        goto ac;
    }
    else
        main();
    }
}
void DAA()
{
    char fill_yes_no[K],another;
    another='Y';
    while(another=='Y')
    {
    int count4;
    printf("\n\n\n");
    printf("          ------------------------------------------------\n");
    printf("          Welcome to Doctor Appointment Application System\n");
    printf("          ------------------------------------------------\n");
    printf("\n");
    f:
    printf("          ***Please Enter the Information Correctly***\n");
    printf("\n");
    printf("          Enter Name - ");
    scanf("%s",app[count4].name);
    printf("          Enter Gender (M/F/T) - ");
    scanf("%s",app[count4].gender);
    printf("          Enter Age - ");
    scanf("%s",app[count4].age);
    printf("          Enter Blood Group (A+/A-/B+/B-/O+/O-/AB+/AB-) - ");
    scanf("%s",app[count4].bloodgroup);
    printf("          Enter Appointment For (Cardiologist/Gastroenterologist/Psychiatrist/Ophthalmologist/Oncologist/Pediatrician/Neurologist) - ");
    scanf("%s",app[count4].appointmentfor);
    if(strcmp(app[count4].appointmentfor,"Cardiologist")==0)
    {
        printf("\n          Doctor Appointed - Shashwat Prasad\n");
        printf("\n          Date - Upcoming Monday\n");
        printf("\n          Time - 08:00\n");
        printf("\n");
        printf("          Your Appointment is Confirmed\n");
    }
    else if(strcmp(app[count4].appointmentfor,"Gastroenterologist")==0)
    {
        printf("\n          Doctor Appointed - Roshan Priyadarshi\n");
        printf("\n          Date - Upcoming Tuesday\n");
        printf("\n          Time - 09:00\n");
        printf("\n");
        printf("          Your Appointment is Confirmed\n");
    }
    else if(strcmp(app[count4].appointmentfor,"Psychiatrist")==0)
    {
        printf("\n          Doctor Appointed - Sarthak Dwivedi\n");
        printf("\n          Date - Upcoming Wednesday\n");
        printf("\n          Time - 10:00\n");
        printf("\n");
        printf("          Your Appointment is Confirmed\n");
    }
    else if(strcmp(app[count4].appointmentfor,"Ophthalmologist")==0)
    {
        printf("\n          Doctor Appointed - ASSVLY Yashwanth\n");
        printf("\n          Date - Upcoming Thrusday\n");
        printf("\n          Time - 11:00\n");
        printf("\n");
        printf("          Your Appointment is Confirmed\n");
    }
    else if(strcmp(app[count4].appointmentfor,"Oncologist")==0)
    {
        printf("\n          Doctor Appointed - Srikar Vaka\n");
        printf("\n          Date - Upcoming Friday\n");
        printf("\n          Time - 16:00\n");
        printf("\n");
        printf("          Your Appointment is Confirmed\n");
    }
    else if(strcmp(app[count4].appointmentfor,"Pediatrician")==0)
    {
        printf("\n          Doctor Appointed - Shivam\n");
        printf("\n          Date - Upcoming Saturday\n");
        printf("\n          Time - 17:00\n");
        printf("\n");
        printf("          Your Appointment is Confirmed\n");
    }
    else if(strcmp(app[count4].appointmentfor,"Neurologist")==0)
    {
        printf("\n          Doctor Appointed - Nikhil Rajput\n");
        printf("\n          Date - Upcoming Sunday\n");
        printf("\n          Time - 18:00\n");
        printf("\n");
        printf("          Your Appointment is Confirmed\n");
    }
    else
        printf("\n          Sorry Doctor is Not Available\n");
    count4++;
    printf("\n");
    printf("\n          Do You Want to Fill More Application ? (Yes/No) - ");
    scanf("%s",fill_yes_no);
    if(strcmp(fill_yes_no,"Yes")==0)
    {
        printf("\n\n");
        goto f;
    }
    else
        main();
    }
}
void END()
{
    printf("\n\n\n");
    printf("          Thank You For Coming\n");
    printf("          We Hope to See You Soon\n");
    printf("\n");
    exit(1);
}
