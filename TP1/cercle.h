using namespace std;
class Cercle
{
 public:
    float x,y,rayon;
    Cercle(float x, float y, float rayon);
    float perimetre();
    float surface();
    bool encercle(float u, float v);
};