class CComplex
{
    double mR, mI; 
public:
    void SetValue(double zR, double zI);
    void ShowValue();
    CComplex Add(CComplex zC);
    
};//类定义之后也需要有;结尾
//类的声明与定义