#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Great_Freedom_Fighters_Of_India
{
    int SINo;
    char name[30];
    struct Their_Details
    {
        int age;
        char born[25],martyred[25],role[30],brief[500];
    }details[5];
}FFI[5];
void readDetailsOfFFI()
{
    strcpy(FFI[0].details[0].born,"September 27, 1907");
    strcpy(FFI[0].details[0].martyred,"March 23, 1931");
    FFI[0].details[0].age=1930-1907;
    strcpy(FFI[0].details[0].role,"Revolutionary hero");
    strcpy(FFI[0].details[0].brief,"Bhagat Singh attended Dayanand Anglo Vedic High School, which was operated by Arya Samaj (a reform sect of modern Hinduism)\nand then National College, both located in Lahore. He began to protest British rule in India while still a youth and\nsoon fought for national independenceHe is credited with popularizing the catchphrase “Inquilab zindabad”\n(“Long live the revolution”).In 1928 Bhagat Singh plotted with others to kill the police chief responsible for the death of Indian\nwriter and politician Lala Lajpat Rai Bhagat Singh had to flee Lahore to escape the death penalty.\nIn 1929 he and an associate lobbed a bomb at the Central Legislative Assembly in Delhi to protest the implementation\nof the Defence of India Act and then surrendered.\nHe was hanged at the age of 23 for the murder of Saunders.");
    strcpy(FFI[1].details[1].born,"January 23, 1897");
    strcpy(FFI[1].details[1].martyred,"August 18, 1945");
    FFI[1].details[1].age=1945-1897;
    strcpy(FFI[1].details[1].role,"Indian revolutionary");
    strcpy(FFI[1].details[1].brief,"Netaji Subhas Chandra Bose prominent in the independence movement against British rule of India. He also led an Indian\nnational force from abroad against the Western powers during World War II.Bose was known in particular for his militant\napproach to independence and for his push for socialist policies.form a trained army of about 40,000 troops\nin Japanese-occupied Southeast Asia. On October 21, 1943,Bose proclaimed the establishment of a provisional independent Indian government\nand his so-called Indian National Army (Azad Hind Fauj) overland into India\nHis most famous quote was 'Give me blood and I will give you freedom' This was the call he used to give the INA armies\nto motivate them. Jai Hind was another slogan used by him and later adopted by the Government\nof India and the Indian Armed Forces.Subhas Chandra Bose reportedly died in a Japanese hospital in Taiwan\nfrom burn injuries on August 18, 1945, as a result of a plane crash while fleeing Southeast Asia.");
    strcpy(FFI[2].details[2].born,"July 19, 1827");
    strcpy(FFI[2].details[2].martyred,"April 8, 1857 ");
    FFI[2].details[2].age=1856-1827;
    strcpy(FFI[2].details[2].role,"Freedom fighter");
    strcpy(FFI[2].details[2].brief,"Indian soldier whose attack on British officers on March 29, 1857 which came to be known as the First War of Independence\nHe was made a soldier (sepoy) in the 6th Company of the 34th Bengal Native Infantry, which included a large number\nof Brahmans. a new Enfield rifle was introduced into India that required a soldier to bite off the ends of greased cartridges\nin order to load the weapon. the lubricant used was either cow or pig lard, which was repugnant to Hindus or Muslims\nrespectively. the general agreement is that Pandey attempted to incite his fellow sepoys to rise up against their British officers, attacked two of those officers,\nattempted to shoot himself after having been restrained, and eventually was overpowered and arrested.Pandey was soon\nsentenced to death. His execution (by hanging) was set for April 18, but British authorities, fearing the outbreak of a large-scale\nrevolt moved the date up to April 8.");
    strcpy(FFI[3].details[3].born,"July 23, 1906");
    strcpy(FFI[3].details[3].martyred,"February 27, 1931");
    FFI[3].details[3].age=1930-1906;
    strcpy(FFI[3].details[3].role,"Indian revolutionary");
    strcpy(FFI[3].details[3].brief,"Chandrasekhar Azad who organized and led a band of militant youth during India’s independence movement. Azad was drawn int\nthe Indian national movement at a young age. Azad was disappointed by Gandhi’s suspension of the noncooperation\nmovement in February 1922. Joining the radical Hindustan Republican Association (HRA), Azad participated in several violent crimes\nnotably the Kakori train robbery (1925) and the revenge killing of a police officer (1928). His crimes had made him\na wanted man, but Azad was able to elude the police and its informants for several years. Determined never to be captured by police, Azad was constantly on the move.\nOn February 27, 1931, Azad arranged to meet a revolutionary at Allahabad’s Alfred Park (now Azad Park).\nHe was betrayed to the police, who surrounded him as soon as he entered the park. A gun battle ensued,\nin which two police officers were wounded, and Azad was fatally shot.");
    strcpy(FFI[4].details[4].born,"November 19, 1835");
    strcpy(FFI[4].details[4].martyred,"June 17, 1858");
    FFI[4].details[4].age=1858-1834;
    strcpy(FFI[4].details[4].role,"Rani of Jhansi");
    strcpy(FFI[4].details[4].brief,"Rani of Jhansi and a leader of the Indian Mutiny of 1857–58. Lakshmi Bai had an unusual upbringing for a Brahman girl.\nGrowing up with the boys in the peshwa’s court, she was trained in martial arts and became proficient\nin sword fighting and riding. She married the maharaja of Jhansi, Gangadhar Rao, but was widowed without bearing a surviving heir\nto the throne. An agent of the East India Company was posted in the small kingdom to look after administrative matters.\nThe 22-year-old queen refused to cede Jhansi to the British. The company’s forces surrounded the fort of Jhansi, and a fierce battle\nraged.  Lakshmi Bai did not surrender even after her troops were overwhelmed Lakshmi Bai managed to escape from the fort with a small force\nof palace guards and headed eastward, where other rebels joined her. Tantia Tope and Lakshmi Bai then mounted a successful assault\non the city-fortress of Gwalior. After taking Gwalior, Lakshmi Bai marched east to Morar to confront a British counterattack led by Rose.\nDressed as a man, she fought a fierce battle and was killed in combat.");
}
void displayTheirData()
{
    for(int i=0; i<5; i++)
    {
        printf("\nName: %s\nBorn on: %s\nMartyred on: %s\nAge: %d\nRole: %s\n%s\n\n\n",FFI[i].name,FFI[i].details[i].born,FFI[i].details[i].martyred,FFI[i].details[i].age,FFI[i].details[i].role,FFI[i].details[i].brief);
    }
}
int main()
{
    char choice[1];
    FFI[0].SINo=1;
    strcpy(FFI[0].name,"Bhagat Singh");
    FFI[1].SINo=2;
    strcpy(FFI[1].name,"Subhas Chandra Bose");
    FFI[2].SINo=3;
    strcpy(FFI[2].name,"Mangal Pandey");
    FFI[3].SINo=4;
    strcpy(FFI[3].name,"Chandrasekhar Azad");
    FFI[4].SINo=5;
    strcpy(FFI[4].name,"Lakshmi Bai");
    for(int i=0; i<5; i++)
    {
        printf(" %d.  %s\n",FFI[i].SINo,FFI[i].name);
    }
    readDetailsOfFFI();
    printf("\nPress enter key to display their details.\n  or else type 'exit' command to close this output window\n\t:\t");
    gets(choice);
    if(choice[0]=='e')
        exit(1);
    else
        displayTheirData();
    return 56;
}
