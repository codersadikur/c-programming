#include<stdio.h>

int main() {
    long long int eyes, faces, bodyes;
    scanf("%lld %lld %lld", &eyes, &faces, &bodyes);

    if(faces != 0 && eyes !=0 && bodyes != 0) {
        if(eyes <= faces && eyes <= bodyes ) {
            printf("%lld", eyes);
        }
        else if(faces <= eyes && faces <= bodyes ) {
            long long int m_eyes = eyes - faces;
            long long int m_bodyes = bodyes - faces;
            if (m_eyes / 2 >= m_bodyes) {
                printf("%lld",faces + m_bodyes);
            }
            else if(m_eyes / 2 <= m_bodyes ) {
               printf("%lld",faces + (m_eyes / 2));
            }

        }
        else if(bodyes <= eyes && bodyes <= faces ) {
            printf("%lld", bodyes);
        }
    }

    else if(faces == 0) {
        if(eyes/2 >= bodyes) {
            printf("%lld", bodyes);
        }
        else if(eyes / 2 <= bodyes ) {
            printf("%lld", (eyes / 2));
        }
    }
    else if(eyes == 0) {
        printf("%lld", eyes);
    }
    else if(bodyes == 0) {
        printf("%lld", bodyes);
    }
    
    return 0;
}