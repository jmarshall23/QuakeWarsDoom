// graphManagerLocal.h
#ifndef __GRAPH_MANAGER_LOCAL_H__
#define __GRAPH_MANAGER_LOCAL_H__

class sdGraphLocal : public sdGraph {
public:
    sdGraphLocal();

    void AddSample(const char* name, double value, double rangeMin, double rangeMax, const idVec4& color) override;
    void SetMaxSamples(int max) override;
    void Draw(int x, int y, int w, int h) override;
    void Clear() override;

private:
    struct category_t {
        category_t() {
            samples.Fill(800, 0.0);
            minValue = idMath::INFINITY;
            maxValue = -idMath::INFINITY;
            insertPoint = 0;
        }
        idVec4 color;
        idList<double> samples;
        int insertPoint;
        double minValue;
        double maxValue;
        double rangeMin;
        double rangeMax;
    };

    typedef idHashMap<idStr, category_t> categories_t;
    categories_t categories;
};

class sdGraphManagerLocal : public sdGraphManager {
public:
    ~sdGraphManagerLocal(void) override {}

    void Init() override;
    void Shutdown() override;

    sdGraph* AllocGraph(const char* name) override;
    sdGraph* FindGraph(const char* name) override;
    void FreeGraph(const char* name) override;

    void Draw() override;

private:
    idHashMap<idStr, sdGraph*> graphs;
};

#endif // __GRAPH_MANAGER_LOCAL_H__