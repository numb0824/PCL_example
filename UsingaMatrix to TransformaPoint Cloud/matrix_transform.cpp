#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_cloud.h>
#include <pcl/console/parse.h>
#include <pcl/visualization/pcl_visualizer.h>

using namespace std;
//this function display the help
void showHelp(char * program_name)
{
    cout << endl;
    cout << "Usage: " << program_name << " cloud_filename.[pcd|ply]" << endl;
    cout << "-h: Show this help." << endl;
}
//this is the main function
int main(int argc, char** argv)
{
    //show help
    if (pcl::console::find_switch (argc, argv, "-h") || pcl::consle::find_switch (argc, argv, "--help"))
    {
        showHelp (argv[0]);
        return 0;
    }
    
    //fetch point cloud filename in arguments | works with PCD and PLY files
    vector<int> filenames;
    bool file_is_pcd = false;

    filenames = pcl::console::parse_file_extension_argument (argc, argv, ".ply");
    
    if (filenames.size () != 1)
    {
        filenames = pcl::console::parse_file_extension_argument (argc, argv, ".pcd");

        if (filenames,size () != 1)
        {
            showHelp (argv [0]);
            return  -1;
        }
        else
        {
            file_is_pcd = true;
        }
    }
    //load file | works with pcd and ply files;
    pcl::PointCloud<pcl::PointXYZ>::Ptr source_cloud (new pcl::PointCloud<pcl::PointXYZ> ());
    
}pcl::PointCloud<pcl::PointXYZ>::Ptr source_cloud (new pcl::PointCloudpcl::PointCloud<pcl::PointXYZ>::Ptr source_cloud (new pcl::PointCloud<pcl::PointXYZ> ());