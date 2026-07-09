class Solution {
public:

   class DirectedGraph{
    public:
       int V;
       list<int> *Connections;

      DirectedGraph(int V){
        this->V = V;
        Connections = new list<int>[V];
      }

      void addEdge(int u,int v){
        Connections[u].push_back(v);
      }

      bool cycle(int src,vector<bool>& vis,vector<bool>& recurPath){
        vis[src] = true;
        recurPath[src] = true;

        for(int i : Connections[src]){
            if(!vis[i]){
                if(cycle(i,vis,recurPath)){
                    return true;
                }
            }else if (recurPath[i]){
                return true;
            }
        }
        recurPath[src] = false;
        return false;
      }

      bool isCyclic(){
        vector<bool> vis(V,false);
        vector<bool> recurPath(V,false);

        for(int i = 0; i < V;i++){
                if(cycle(i,vis,recurPath)){
                    return true;
            }
        }
        return false;
      }
   };


    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        DirectedGraph DG(numCourses);
        for(int i = 0; i < prerequisites.size();i++){
            DG.addEdge(prerequisites[i][0],prerequisites[i][1]);
        }
        return !DG.isCyclic();
    }
};