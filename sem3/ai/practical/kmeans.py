#K-MEANS

from sklearn.cluster import KMeans
import pandas as pd

raw_dataset = [
    {"individual":1, "x":1.0, "y": 1.0},
    {"individual":2, "x":1.5, "y": 2.0},
    {"individual":3, "x":3.0, "y": 4.0},
    {"individual":4, "x":5.0, "y": 7.0},
    {"individual":5, "x":3.5, "y": 5.0},
    {"individual":6, "x":4.5, "y": 5.0},
    {"individual":7, "x":3.5, "y": 4.5}
]

dataset = pd.DataFrame(raw_dataset)
print(dataset);
dataset.drop(columns=["individual"], inplace=True)
print(dataset);

kmeans = KMeans(n_clusters=2, random_state=42)
kmeans.fit(dataset)

labels = kmeans.labels_
centroids = kmeans.cluster_centers_

print(labels[:10])
print("Cluster1 centroid: ", centroids[0])
print("Cluster2 centroid: ", centroids[1])