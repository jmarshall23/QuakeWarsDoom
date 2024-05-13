// GraphManager.cpp
//

#include "precompiled.h"

void sdGraphLocal::AddSample(const char* name, double value, double rangeMin, double rangeMax, const idVec4& color) {
    category_t& category = categories[name];
    category.color = color;
    category.rangeMin = rangeMin;
    category.rangeMax = rangeMax;

    category.samples[category.insertPoint] = value;
    category.insertPoint = (category.insertPoint + 1) % category.samples.Num();

    category.minValue = idMath::Min(category.minValue, value);
    category.maxValue = idMath::Max(category.maxValue, value);
}

void sdGraphLocal::SetMaxSamples(int max) {
    for (auto& it : categories) {
        it.second.samples.SetNum(max);
    }
}

void sdGraphLocal::Draw(int x, int y, int w, int h) {

}

void sdGraphLocal::Clear() {
    categories.Clear();
}


void sdGraphManagerLocal::Init() {
    // Implementation for initializing the graph manager

}

void sdGraphManagerLocal::Shutdown() {
    // Implementation for shutting down the graph manager
    graphs.Clear();
}

sdGraph* sdGraphManagerLocal::AllocGraph(const char* name) {
    // Implementation for allocating a graph
    std::cout << "Allocating graph: " << name << std::endl;
    sdGraph* graph = new sdGraphLocal();
    graphs.Set(name, graph);
    return graph;
}

sdGraph* sdGraphManagerLocal::FindGraph(const char* name) {
    // Implementation for finding a graph
    sdGraph** graph = graphs.Get(name);
    if (graph) {
        std::cout << "Found graph: " << name << std::endl;
        return *graph;
    }
    std::cout << "Graph not found: " << name << std::endl;
    return nullptr;
}

void sdGraphManagerLocal::FreeGraph(const char* name) {
    // Implementation for freeing a graph
    std::cout << "Freeing graph: " << name << std::endl;
    sdGraph* graph = FindGraph(name);
    if (graph) {
        graphs.Remove(name);
        delete graph;
    }
}

void sdGraphManagerLocal::Draw() {
    // Implementation for drawing all graphs
    std::cout << "Drawing all graphs." << std::endl;
    for (auto it = graphs.Begin(); it != graphs.End(); ++it) {
        it->second->Draw(0, 0, 800, 600); // Example drawing call with arbitrary dimensions
    }
}